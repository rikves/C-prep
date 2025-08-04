#include <stdio.h>

int main()
{
    char str[] = "Salah";
    int i = 0;

    printf("Initial string: %s\n\n", str);

    printf("Loop using &str[i++] (address moves):\n");
    while (str[i])
    {
        printf("Character: %c | Address: %p\n", str[i], (void *)&str[i]);
        i++;
    }

    // Reset i
    i = 0;

    printf("\nModifying with str[i]++ (value changes):\n");
    while (str[i])
    {
        printf("Before: %c (%d) at %p\n", str[i], str[i], (void *)&str[i]);
        str[i]++;  // increment the character
        printf("After : %c (%d) at %p\n", str[i], str[i], (void *)&str[i]);
        i++;
    }

    printf("\nModified string: %s\n", str);
    return 0;
}

