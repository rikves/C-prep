#include <unistd.h>

// void	last_word(char **av, int i)
// {
// 	while(av[1][i] == ' ' || av[1][i] == '\t')
// 		i--;
// 	while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
// 		i--;
// 	i++;
// 	while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\0')
// 	{
// 		write(1, &av[1][i], 1);
// 		i++;
// 	}
// }


int	main(int ac, char **av)
{
	int i ;
	if(ac == 2)
	{
		i = 0; 
		while(av[1][i])
			i++;
		av[1][i] = '\0';
		i--;
		//last_word(av, i);
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
			i--;
		i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
		
	}
	write(1,"\n",1);

}
