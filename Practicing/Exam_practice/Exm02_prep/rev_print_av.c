#include <unistd.h>



int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int len;

	char *str = argv[1];
	if (argc == 2)
	{
		len = ft_strlen(str);
		len--;
		while (len >= 0)
		{
			write(1,&str[len],1);
			len--;
		}
	}
	write(1,"\n",1);
}
