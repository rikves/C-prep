#include <unistd.h>


void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	put_num(int a, int b, int c)
{
	ft_putc(a);
	ft_putc(b);
	ft_putc(c);	
	if(!(a == '7'))
	{
		ft_putc(',');
		ft_putc(' ');
	}
}


void	print_comb(void)
{
	char	i;
	char	j;
	char k;
	i = '0';

	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8') 
		{
			k = j + 1;
			while (k <= '9')
			{
				put_num(i,j,k);
				k++;
			}
			j++;
		}
		i++;
	}
}


int	main(void)
{
	print_comb();
	return 0;
}
