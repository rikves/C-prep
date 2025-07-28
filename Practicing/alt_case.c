// Online C compiler to run C program online
#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int len;
    
    if (argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    
    i = 1;
    while (i < argc)
    {
        if (!(argv[i]))
        {
            i++;
            continue;
        }
        
        len = ft_strlen(argv[i]);
        j = 0;
        
        while (argv[i][j])
        {
            if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') || (argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
            {
                if (len % 2 == 0) // Even length - UPPERCASE
                {
                    if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                        argv[i][j] = argv[i][j] - 32;
                }
                else // Odd length - lowercase
                {
                    if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                        argv[i][j] = argv[i][j] + 32;
                }
            }
            write(1, &argv[i][j], 1);
            j++;
        }
        
        if (i < argc - 1)
            write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
