#include <stdio.h>
#include <unistd.h>

void foo(void)
{
	printf("foo\n");
}

int main(int argc, char const *argv[])
{
	int	nb;

	nb = 42;
	printf("%p\t%p \n", foo,&nb); //low adress (Text) vs High adress (stack)

	sleep(50);
	return 0;
}
