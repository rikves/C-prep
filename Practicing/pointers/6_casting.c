#include <stdio.h>


int	main(void)
{
	int nb ;
	int *ptr;

	nb = 0b1100111;
	ptr = &nb;

	printf("%d is : %c\n", *ptr, *(char *)ptr);

}
/* int main() */
/* { */
/* 	int		n; */
/* 	void	*p; */
/**/
/* 	n = 65; */
/* 	p = &n; */
/* 	printf("%c\n", *(char *)p); */
/*     return 0; */
/* } */
