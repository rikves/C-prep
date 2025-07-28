#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

int main()
{
	char str1[] = "yasuke"; // return 1
	char str2[] = "skosalah1";  // return 0
	int returned_value = ft_str_is_lowercase(str1);
	// char *str = "\n============================================\n";
	// char *tabs = "\t\t\t";

	ft_putchar('\n');
	// ft_putstr(str);
	// ft_putstr(tabs);
	ft_putnbr(returned_value); // abcghij[`aBCZ
	ft_putchar('\n');
	ft_putnbr(ft_str_is_lowercase(str2)); // abcdefghijkl
	ft_putchar('\n');
	// ft_putstr(str);
}
