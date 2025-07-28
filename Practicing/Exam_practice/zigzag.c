#include <unistd.h>

int main(int ac, char **av)
{
    int i = 1; // Start from av[1], not av[0] (program name)
    int j;
    
    if (ac < 2) // Check argument count, not av itself
    {
        write(1, "\n", 1);
        return (0);
    }
    
    while (i < ac) 
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z') 
            {
                av[i][j] = av[i][j] - 32; // Convert to uppercase
            }
            else if (av[i][j] >= 'A' && av[i][j] <= 'Z') // uppercase
            {
                av[i][j] = av[i][j] + 32; // Convert to lowercase
            }
            // Non-alphabetic characters remain unchanged
            write(1, &av[i][j], 1); // Write each character
            j++;
        }
        i++;
        if (i < ac) // Add space between arguments
            write(1, " ", 1);
    }
    write(1, "\n", 1);
    return (0);
}
