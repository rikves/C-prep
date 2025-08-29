#include <unistd.h>



void	ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_putnbr(int nb)
{
	if(nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int main(int argc, char  *argv[])
{
	int i = 0;
	char *str = argv[1];

	int sum = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= '0' && str[i] <= '9')
				sum += str[i] - 48;
			i++;
		}
		ft_putnbr(sum);
	}
	write(1,"\n",1);
	return 0;
}
