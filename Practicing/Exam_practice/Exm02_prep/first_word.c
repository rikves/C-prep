#include <unistd.h>



int	main(int argc, char **argv)
{
	int i = 0;

	char *str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			while (str[i] != ' ' && str[i] != '\t' && str[i])
			{
				write(1,&str[i],1);
				i++;
			}
			break;
		}
	}
}
