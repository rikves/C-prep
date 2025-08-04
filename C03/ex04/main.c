
#include <stdio.h>
int main()
{
	char text[] = "Hello, world!";
	char *found = ft_strstr(text, "world");
	printf("Found it! -> %s\n", found);
}
