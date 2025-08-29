#include <unistd.h>


int  main(int ac, char **av)
{
    int i =0;
    int flag;

if(ac == 2)
{
    while (av[1][i])
    {
        if (av[1][i] == '_')
            flag = 1; 

        else
        {
            if (flag == 1 && av[1][i] >= 'a' && av[1][i] <= 'z')
                 av[1][i] -= 32;
            write(1, &av[1][i], 1);
            flag = 0;
        }
        i++;
    }
}
    write(1,"\n",1);
}

