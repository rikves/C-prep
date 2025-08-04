#include <stdio.h>

int main(int argc, char const *argv[])
{
	char dst[4] = "Sal";
	char src[3] = "Se";

	char *strct = ft_strcat(dst, src);

	printf("%s\n", strct);
	return 0;
}