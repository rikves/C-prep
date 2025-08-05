#include <stdio.h>

int fibonacci(int nb)
{
	if(nb == 1)
		return 1;

	else if(nb == 2)
		return 2;

	else
		return(fibonacci(nb - 1) + fibonacci(nb - 2));
}


int	main()
{
	int n = 4;

	//fibonacci(n);
	printf("%d\n",fibonacci(n));
}
