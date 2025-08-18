#include <unistd.h>

int	main(int ac, char **av)
{
	int tab[250] = {0}; 
	int i;
	int j;

	i = 0;
	j = 1;

	if(ac == 3)
	{
		while(j < 3)
		{
			//Loop over the 2 strings to toggle the char 
			while(av[j][i])
				tab[(int)av[j][i++]] = 1;
			//reset i to 0
			i = 0;
			j++;
		}
		// reset j to 1 cuz we wanna handle the case of printing chars
		j = 1;
		while(j < 3)
		{
			//Try to print all non doubled chars in the 2 strings
			while(av[j][i])
			{
				if(tab[(int)av[j][i]] == 1)
				{
					write(1,&av[j][i],1);
					tab[(int)av[j][i]] = 2;
				}
				i++;
			}
			//reset i to 0
			i = 0;
			j++;
		}
		
	}
	write(1,"\n",1);
}
