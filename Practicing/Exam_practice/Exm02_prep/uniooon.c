#include <unistd.h>


int main(int ac, char **av)
{
	int tab[128] = {0};
	int i = 1;
	int j = 0;

	if (ac == 3)
	{
		while (i <= 2)
		{
			j = 0;
			while (av[i][j])
			{
				tab[av[i][j]] = 1;
				j++;
			}
			i++;
		}
		i = 1;
		while (i <= 2)
		{
			j = 0;
			while (av[i][j])
			{
				if (tab[av[i][j]] == 1)
				{
					write(1,&av[i][j],1);
					tab[av[i][j]] = 0;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}