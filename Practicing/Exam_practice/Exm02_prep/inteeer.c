#include <unistd.h>

int	main(int ac, char **av)
{
	int tab[128] = {0};
	int i = 0;

	if (ac ==3)
	{
		while (av[2][i])
		{
			tab[av[2][i]] = 1;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			if (tab[av[1][i]] == 1)
			{
				write(1,&av[1][i],1);
				tab[av[1][i]] = 0;
			}
			i++;
			
		}
	}
	write(1,"\n",1);
}