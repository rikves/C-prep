#include <stdio.h>

int	main()
{
	int	n = 20;
	int	m = 10;
	int	result_div;
	int	result_mod;
	
	ft_div_mod(n, m, &result_div, &result_mod);

	printf("%d\n", result_div);
	printf("%d\n", result_mod);
}