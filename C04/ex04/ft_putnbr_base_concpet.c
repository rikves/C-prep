
#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str);
void ft_putchar(char c);
void print_nbr(int n, int base_value, char *symbols);
void ft_putnbr_base(int nbr, char *base);
int char_twice(char *symbols);

int main(int argc, char **argv)
{
	int n;
	char *base_symboles;

	n = ft_atoi(argv[1]);
	base_symboles = argv[2];
	// printf("%d",n);
	ft_putnbr_base(n, base_symboles);
	return 0;
}

int ft_atoi(char *str)
{
	int n;
	int n_sign;

	n_sign = 0;
	n = 0;

	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		str++;
	}
	while (*str == '+' || *str == '-') 
	{
		if (*str == '-')
			n_sign++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10; 
		n += *str - 48;
		str++;
	}
	if (n_sign % 2) 
		return (-n);
	return (n);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return;
		base_value++;
	}
	if (base_value < 2)
		return;
	if (char_twice(base))
		return;
	print_nbr(nbr, base_value, base);
}

void print_nbr(int n, int base_value, char *symbols)
{
	long nbr_long;

	nbr_long = n;
	if (nbr_long < 0) //watch again putnbr oceano
	{
		nbr_long *= -1;
		ft_putchar('-');
	}
	if (nbr_long >= base_value)
		print_nbr(nbr_long / base_value, base_value, symbols);
	ft_putchar(symbols[nbr_long % base_value]);
}

int char_twice(char *symbols)
{
	int i;
	int j;

	i = 0;
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
