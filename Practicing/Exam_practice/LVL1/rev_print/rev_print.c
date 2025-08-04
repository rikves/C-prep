#include <unistd.h>

char *ft_rev_print (char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	i -= 1;
	while(i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	write(1,"\n",1);
	return str;
}



int main(int argc, char **argv)
{
	char *str = argv[1];

	ft_rev_print(str);
	return (0);
}
