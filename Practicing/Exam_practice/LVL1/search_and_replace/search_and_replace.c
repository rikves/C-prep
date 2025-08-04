#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	
	i = 0;	
	if(ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		while(av[1][i])
		{
			if(av[1][i] == av[2][0])
				write(1,&av[3][0], 1);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1,"\n",1);
}

