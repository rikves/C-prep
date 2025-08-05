#include <unistd.h>

int	main(int ac, char **av)
{
	//char	c;
	if(ac > 1)
	{
		while(av[1][0])
		{
			//c = *av[1];  
			//write(1, &c, 1);      
			write(1, av[1]++, 1);
		}	
	}
	write(1, "\n", 1);
}
