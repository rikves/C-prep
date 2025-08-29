#include <unistd.h>



void	to_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z' )
		*c += 32;

}

int main(int argc, char  *argv[])
{
	int	i = 0;
	char *str = argv[1];

	if (argc == 2)
	{
		int flag = 0;
		while (str[i])
		{
			to_lower(&str[i]);
			if (str[i] == ' ' || str[i] == '\t')
			{
				write(1,&str[i],1);
				flag = 0;
			}
			else
			{
				if (flag == 0)
				{
					str[i] -= 32;
					flag = 1;
				}
				write(1,&str[i],1);
			}
			i++;
			
		}
		
	}
	
	return 0;
}
