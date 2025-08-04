#include <unistd.h>

void print_nb(int n)
{
	if(n >= 10)
	{
		print_nb(n / 10);
	}
	n = (n % 10) + 48;
	write(1,&n,1);
}

int main()
{
	int nb;
	nb = 1;

	while (nb <= 100)
	{
		if((nb % 3 == 0) && ( nb % 5 == 0))
		{
			write(1,"fizzBuzz",8);
		}
		else if (nb % 3 == 0)
		{
			write(1,"fizz",4);
		}
		else if (nb % 5 == 0)
		{
			write(1, "buzz",4);
		}
		else
		{
			print_nb(nb);
		}
		write(1,"\n", 1);
		nb++;
	}
	return (0);
}
