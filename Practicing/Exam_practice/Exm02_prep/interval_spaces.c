#include <unistd.h>




int	main(int argc, char **argv)
{
	int i =0 ;
	char *str = argv[1];

	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			write(1,&str[i],1);
			if (str[i+1] != '\0')
				write(1,"   ",3);
			i++;
		}
	}
	write(1,"\n",1);
}
