#include <unistd.h>

char *rev_print(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	i--;
	while(str[i] != '\0')
	{
		write(1,&str[i],1);
		i--;
	}
	write(1,"\n",1);
	return (str);
}


int	main(int ac, char **av)
{
	(void)ac;
	rev_print(av[1]);
}
