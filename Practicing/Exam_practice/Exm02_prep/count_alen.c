#include <stdio.h>

int count_alen(char *str)
{
	int i ;

	while (str[i])
	{
		if (str[i] == 'a')
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int main()
{
	printf("%d",count_alen("slhkam"));
}