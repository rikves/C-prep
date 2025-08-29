#include <unistd.h>



void ft_putchar(char c)
{
	write(1,&c,1);
}

void putnb(int n)
{
	if (n >= 10)
		putnb(n / 10);
	ft_putchar((n % 10) + 48);

}


int	main()
{
	int i = 1;
	
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			write(1,"PingPong",8);
		}
		else if (i % 3 == 0)
		{
			write(1,"Ping",4);
		}
		else if (i % 5 == 0)
		{
			write(1,"Pong",4);
		}
		else
		{
			putnb(i);
		}
		write(1,"\n",1);
		i++;
	}
}
