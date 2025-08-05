#include <unistd.h>


int	main(void)
{
	char	c;
	c = 'a';

	while(c <= 'z')
	{
		if(c == 'c' || c == 'z')
		{
			c++;
			continue;
		}
		write(1, &c, 1);
		c++;
	}
	write(1, "\n", 1);

	return (0);
}
