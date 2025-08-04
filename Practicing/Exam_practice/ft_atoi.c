#include <stdio.h>

int ft_atoi(char *str)
{
	int	n;
	int	n_sign;

	n = n_sign = 0;

	while((*str <= 9 && *str >= 13) || *str == 32)
	{
		str++;
	}

	while(*str == '+' || *str == '-')
	{
		if(*str == '-')
			n_sign++;
		str++;
	}
	
	while(*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - 48;
		str++;
	}

	if(!(n_sign % 2))
		return (n);
	return (-n);
}


int main()
{
	char str[] = "  -+--+3242";

	int n = ft_atoi(str);

	printf("%d\n", n);

}
