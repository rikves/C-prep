#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int	main()
{
	int n = 1337;
	int nb = 42;
	
	printf("n = %d \t nb = %d\n",n, nb);
	ft_swap(&n, &nb);
	printf("n = %d \t nb = %d\n",n, nb);
	
	return (0);
}
