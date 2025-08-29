#include <unistd.h>


int	ft_atoi(char *str)
{
	int num = 0;
	int num_signs = 0;
	int pos_counter = 0;
	int neg_counter = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_counter++;
		if (*str == '+')
			pos_counter++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if ((pos_counter > 1 || neg_counter > 1) || (pos_counter == 1 && neg_counter == 1))
		return (0);
	else if (neg_counter == 1)
		return (-num);
	return num;
}

void	ft_putchar(char c)
{
	write(1,&c,1);
}
void	print_nb(int n, int c, char *symbols)
{
	
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= c)
		print_nb(n / c, c, symbols);
	ft_putchar(symbols[n % c]);

}

int main(int argc, char  *argv[])
{
	int i =0;
	
	if (argc ==2)
	{
		char *base16 = "0123456789abcdef";
		int hex = ft_atoi(argv[1]);
		print_nb(hex, 16, base16);
	}
	write(1,"\n",1);
	return 0;
}
