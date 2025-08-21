#include <unistd.h>



void	fputs(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int	main()
{
	fputs("salah");
}
