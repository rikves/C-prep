#include <stdio.h>


int	ft_atoi(char *str)
{
	int n;
	int n_signs;
	n = 0;
	n_signs = 0;

	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		str++;
	}

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			n_signs++;
		}
		str++;
	}
	// "	 -+--+5345". n_signs = 3
	//            n = 0 * 5 * 10 = 0
	//	      n = 0 + 53 - 48 = 5
	//		n = 5
	//	      n = 5 * 3 * 10 = 
	//	     n = 150 + 3
	while (*str >= '0' && *str <= '9')
	{
		n *=  10; 
		n += *str - 48;
		str++;
	}
	
	if (!(n_signs % 2))
		return (n);
	return (-n);
	
}


int ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
	{
		return 0;
	}
	else if (power == 0)
		return 1;

	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return result;
}

int main(int argc, char *argv[])
{
	int s1;	
	int s2;	
	if (argc == 3)
	{
		s1 = ft_atoi(argv[1]);
		s2 = ft_atoi(argv[2]);
		printf("%d", ft_iterative_power(s1, s2));
	}
	printf("\n");
	return 0;
}