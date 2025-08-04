
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char const *argv[])
{
	char s1[] = "salahcv";
	char s2[] = "sahamcv";

	int x = ft_strncmp(s1, s2, 3);
	printf("%d\n", x);

	return 0;
}
