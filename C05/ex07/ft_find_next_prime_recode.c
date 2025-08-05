#include <stdio.h>


int ft_find_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_find_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	printf("%d", ft_find_next_prime(2147483647)); // test case that will return 0 cuz of  INTEGER OVERFLOW! -> nb becomes (-2147483648 >= 2)
	return 0;
}
