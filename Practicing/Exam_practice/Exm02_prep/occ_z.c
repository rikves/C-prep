#include <stdio.h>

int occ_a(char *str)
{
	int i = 0;
	int counter = 0;

	while (str[i])
	{
		if (str[i] == 'Z')
			counter++;
		i++;
	}
	return (counter);
}

int main(int argc, char const *argv[])
{
	printf("%d", occ_a("alZooZppZZ"));
	return 0;
}
