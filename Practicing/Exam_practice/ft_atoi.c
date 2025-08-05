#include <stdio.h>

int ft_atoi(char *str)
{
	int	n;
	int	n_sign;

	n = n_sign = 0;
	
	//skips all tabs or space
	while((*str <= 9 && *str >= 13) || *str == 32)
	{
		str++;
	}
	
	//handles the signs and parity
	while(*str == '+' || *str == '-')
	{
		if(*str == '-')
			n_sign++;
		str++;
	}
	
	// store the number into n by doing some operations
	while(*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - 48;
		str++;
	}
	
	//handles if we gonna return negative n or positive n
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
