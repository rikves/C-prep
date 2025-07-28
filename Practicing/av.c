#include <stdio.h>


void	set_value(int **ptr)
{
	**ptr= 99;
}


int main(int ac, char **av) {
	
	int n = 42;
	int *p = &n;
	int **pp = &p;
	printf("\t\t\t%d\n\n",n);	
	
	set_value(pp);
	printf("\t\t\t%d\n",n);	
	return 0;
}
