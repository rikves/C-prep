#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1,str++,1);

}

int	main(int ac, char **av)
{
	char *temp;

	if(ac == 3)
	{
		temp = av[1];
		while(*temp && *av[2])
		{
			while((*temp == *av[2]) && (*temp && *av[2]))
			{
				temp++;
				av[2]++;
			}
			av[2]++;
			if(!(*temp))
				ft_putstr(av[1]);
		}
	}
	write(1,"\n",1);
	return (0);

}
