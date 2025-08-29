#include <unistd.h>


int	ft_strln(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return i;
	
}

int	main(int ac, char **av)
{
	int i = 0;
	char *str = av[1];

	if (ac == 2)
	{
		int len = ft_strln(str);
		len--;
		while (len >= 0)
		{
			write(1,&str[len],1);
			len--;
		}
	}
	write(1,"\n",1);
}