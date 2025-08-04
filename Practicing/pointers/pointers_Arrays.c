#include <stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
	int nb[10] = {3, 5, 6, 7};

	printf("%p\t%p \n", &nb[0], nb); // Same address cuz array decay to a pointer to the first element in the array
	printf("%p\n", nb); 
	printf("%p\n", nb + 1); 
	printf("%p\n", nb + 2); 
	printf("\n\n");
	int *p;
	int x[5];
	p = x;
	*(p + 0) = 3;
	*(p + 1) = 87;
	*(p + 2) = 6;
	*(p + 3) = 4;


	printf("%d\n", *(p));
	printf("%d\n", *(p+1));

	    return 0;
}
