#include <stdio.h>

int	main()
{
	int c;
	int *pc;

	c = 'A';
	pc = &c;

	printf("%p\n%p\n%p\n%p  \n",
			pc,
			pc+1,
			pc+2,
			pc+3 );

}
