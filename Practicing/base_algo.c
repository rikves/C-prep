#include <stdio.h>
int    main(int ac, char **av){
    int    n;
    int    base;
    base = 2;
    n = 1337;
    printf("\n\t\t\t ALGO CONVERTIING\t\t\n\n");
    while(n)
    {
        printf("\t\t\t %d / %d -> Remainder is : %d\n",n, base, n % base);
        n /= base;
    }
    return (0);
}
