#include <unistd.h>

void	print_nb(int nb)
{
	if(nb >= 10)
	{
		print_nb(nb / 10);
	}
	nb = (nb % 10 + '0');
	write(1, &nb, 1);
}

int	main()
{
	int	i;
	i = 1;

	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzBuzz",8);
		else if (i % 5 == 0)
			write(1, "buzz",4);
		else if (i % 5 == 0 && i % 3 == 0)
			write(1, "fizzbuzz",8);
		else
		{
			print_nb(i);
		}
		i++;
		write(1,"\n",1);	
	}

}
