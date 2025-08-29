#include <unistd.h>



void ft_putc(char c)
{
	write(1, &c ,1);
}

int	main()
{
	int i = 1;

	while (i <= 9)
	{
		if (i % 2 != 0)
			ft_putc(i + 48);
		i++;
	}
	write(1,"\n",1);
}
