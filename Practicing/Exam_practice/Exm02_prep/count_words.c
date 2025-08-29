#include <stdio.h>


int	is_delimiter(char c)
{
	if (c == '\t' || c == ' ')
		return 1;
	else
		return 0;
}

int count_words(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_delimiter(*str))
			str++;
		if(*str != '\0')
			counter++;
		while (*str != '\0' && !(is_delimiter(*str)))
			str++;
	}
	return counter;
}

int	main()
{
	printf("%d",count_words("\t   salah \t  donc koulal"));
}
