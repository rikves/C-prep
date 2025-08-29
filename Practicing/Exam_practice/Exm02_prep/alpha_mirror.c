#include <unistd.h>

void	print_mirror(char c)
{
	if(c >= 'a' && c <= 'z')
		c = 'z' - (c - 'a');
	else if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	write(1,&c,1);

}


int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			print_mirror(av[1][i]);
			i++;
		}
	}
	write(1,"\n",1);
}
