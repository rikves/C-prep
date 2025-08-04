#include <stdio.h>
#include <unistd.h>


int	main()
{
    long a = 7521412018484636008;
    write(1,&a,8);
}
