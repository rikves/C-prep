#include <unistd.h>






int	main(int ac, char **av)
{
	int tab[250] = {0};

	int i = 0;

	if(ac == 3)
	{
		while(av[2][i])
		{
			tab[(int)av[2][i]] = 1;
			i++;
		}
		i = 0;
		while(av[1][i])
		{
			if(tab[(int)av[1][i]] == 1)
			{
				write(1,&av[1][i],1);
				tab[(int)av[1][i]] = 2;

			}
			i++;
		}
	}
	write(1,"\n",1);
}
