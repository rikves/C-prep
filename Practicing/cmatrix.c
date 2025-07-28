#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <ncurses.h>
#include <signal.h>

#define MIN_SPEED 1
#define MAX_SPEED 10
#define DEFAULT_SPEED 4

typedef struct {
    int x, y;
    int speed;
    int length;
    char *chars;
    int *brightness;
} Drop;

// Global variables
Drop *drops;
int num_drops;
int max_x, max_y;
int speed = DEFAULT_SPEED;
int running = 1;
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-=+[]{}|;:,.<>?";
int charset_len;

// Japanese katakana characters (for authentic Matrix look)
char *katakana[] = {
    "ア", "カ", "サ", "タ", "ナ", "ハ", "マ", "ヤ", "ラ", "ワ",
    "イ", "キ", "シ", "チ", "ニ", "ヒ", "ミ", "リ", "ヰ", "ギ",
    "ウ", "ク", "ス", "ツ", "ヌ", "フ", "ム", "ユ", "ル", "グ",
    "エ", "ケ", "セ", "テ", "ネ", "ヘ", "メ", "レ", "ヱ", "ゲ",
    "オ", "コ", "ソ", "ト", "ノ", "ホ", "モ", "ヨ", "ロ", "ヲ"
};
int katakana_count = 50;

void cleanup() {
    if (drops) {
        for (int i = 0; i < num_drops; i++) {
            free(drops[i].chars);
            free(drops[i].brightness);
        }
        free(drops);
    }
    endwin();
}

void signal_handler(int sig) {
    running = 0;
}

void init_ncurses() {
    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    curs_set(0);
    
    if (has_colors()) {
        start_color();
        // Define color pairs for different brightness levels
        init_pair(1, COLOR_GREEN, COLOR_BLACK);   // Bright
        init_pair(2, COLOR_GREEN, COLOR_BLACK);   // Medium
        init_pair(3, COLOR_GREEN, COLOR_BLACK);   // Dim
        init_pair(4, COLOR_WHITE, COLOR_BLACK);   // Head (brightest)
    }
    
    getmaxyx(stdscr, max_y, max_x);
}

void init_drops() {
    num_drops = max_x / 2;  // One drop per 2 columns for spacing
    drops = malloc(num_drops * sizeof(Drop));
    
    for (int i = 0; i < num_drops; i++) {
        drops[i].x = (i * 2) + (rand() % 2);  // Spread across screen
        drops[i].y = -(rand() % max_y);       // Start above screen
        drops[i].speed = (rand() % 3) + 1;    // Speed 1-3
        drops[i].length = (rand() % 15) + 5;  // Length 5-19
        
        // Allocate memory for character trail
        drops[i].chars = malloc(drops[i].length * sizeof(char));
        drops[i].brightness = malloc(drops[i].length * sizeof(int));
        
        // Initialize trail with random characters
        for (int j = 0; j < drops[i].length; j++) {
            drops[i].chars[j] = charset[rand() % charset_len];
            drops[i].brightness[j] = drops[i].length - j;  // Fade from head to tail
        }
    }
}

void update_drops() {
    for (int i = 0; i < num_drops; i++) {
        // Move drop down
        if (rand() % (11 - speed) == 0) {  // Speed control
            drops[i].y++;
            
            // Shift characters down the trail and add new head
            for (int j = drops[i].length - 1; j > 0; j--) {
                drops[i].chars[j] = drops[i].chars[j-1];
            }
            drops[i].chars[0] = charset[rand() % charset_len];
        }
        
        // Reset drop when it goes off screen
        if (drops[i].y - drops[i].length > max_y) {
            drops[i].y = -(rand() % max_y);
            drops[i].x = (rand() % (max_x - 1));
            drops[i].speed = (rand() % 3) + 1;
            drops[i].length = (rand() % 15) + 5;
            
            // Reallocate if length changed
            drops[i].chars = realloc(drops[i].chars, drops[i].length * sizeof(char));
            drops[i].brightness = realloc(drops[i].brightness, drops[i].length * sizeof(int));
            
            for (int j = 0; j < drops[i].length; j++) {
                drops[i].chars[j] = charset[rand() % charset_len];
                drops[i].brightness[j] = drops[i].length - j;
            }
        }
    }
}

void draw_drops() {
    clear();
    
    for (int i = 0; i < num_drops; i++) {
        for (int j = 0; j < drops[i].length; j++) {
            int draw_y = drops[i].y - j;
            int draw_x = drops[i].x;
            
            if (draw_y >= 0 && draw_y < max_y && draw_x >= 0 && draw_x < max_x) {
                // Set color based on position in trail
                if (j == 0) {
                    attron(COLOR_PAIR(4) | A_BOLD);  // Head is brightest
                } else if (j < drops[i].length / 3) {
                    attron(COLOR_PAIR(1) | A_BOLD);  // Bright green
                } else if (j < (2 * drops[i].length) / 3) {
                    attron(COLOR_PAIR(2));           // Medium green
                } else {
                    attron(COLOR_PAIR(3) | A_DIM);   // Dim green
                }
                
                mvaddch(draw_y, draw_x, drops[i].chars[j]);
                attroff(A_BOLD | A_DIM);
                attroff(COLOR_PAIR(1) | COLOR_PAIR(2) | COLOR_PAIR(3) | COLOR_PAIR(4));
            }
        }
    }
    
    // Display controls at bottom
    attron(COLOR_PAIR(1));
    mvprintw(max_y - 1, 0, "CMatrix | Speed: %d | 'q' to quit | '+'/'-' speed | 'r' reset", speed);
    attroff(COLOR_PAIR(1));
    
    refresh();
}

void handle_input() {
    int ch = getch();
    switch (ch) {
        case 'q':
        case 'Q':
        case 27:  // ESC
            running = 0;
            break;
        case '+':
        case '=':
            if (speed < MAX_SPEED) speed++;
            break;
        case '-':
        case '_':
            if (speed > MIN_SPEED) speed--;
            break;
        case 'r':
        case 'R':
            // Reset all drops
            for (int i = 0; i < num_drops; i++) {
                drops[i].y = -(rand() % max_y);
            }
            break;
    }
}

int main(int argc, char *argv[]) {
    // Handle command line arguments
    if (argc > 1) {
        if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
            printf("CMatrix - Matrix Digital Rain Effect\n");
            printf("Usage: %s [speed]\n", argv[0]);
            printf("  speed: 1-10 (default: 4)\n");
            printf("Controls:\n");
            printf("  q/Q/ESC: quit\n");
            printf("  +/-: adjust speed\n");
            printf("  r/R: reset drops\n");
            return 0;
        }
        
        int arg_speed = atoi(argv[1]);
        if (arg_speed >= MIN_SPEED && arg_speed <= MAX_SPEED) {
            speed = arg_speed;
        }
    }
    
    // Initialize
    srand(time(NULL));
    charset_len = strlen(charset);
    signal(SIGINT, signal_handler);
    
    init_ncurses();
    init_drops();
    
    // Main loop
    while (running) {
        handle_input();
        update_drops();
        draw_drops();
        usleep(50000);  // 50ms delay (~20 FPS)
    }
    
    cleanup();
    printf("Reality is an illusion. Welcome back.\n");
    return 0;
}

