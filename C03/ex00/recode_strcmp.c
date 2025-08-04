#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 || *s2)
	{
		if(*s1 != *s2)
		{
			return *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return 0;

}


int main()
{
	char s1[] = "abc";
	char s2[] = "abcde";

	int res = ft_strcmp(s1,s2);
	printf("%d\n", res);

}
