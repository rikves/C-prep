#include <stdio.h>


// Pass by value is literally different from Pass by reference here is how
void borken_swap(int a, int b){
	printf("BEFORE\n");
	printf("%d\n",a);
	printf("%d\n",b);
	
	int temp = a;
	a = b;
	b = temp;
	
	printf("After\n");
	printf("a (local copy): %d\n",a);
	printf("b (local copy) : %d\n",b);
	printf("=== LEAVING BROKEN SWAP ===\n");
}

void	working_swap(int *a, int *b )
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n = 42;
	int m = 98;

	printf("=== IN THE MAIN : ===\n");
	printf("n = %d\n", n);
	printf("m = %d\n", m);
	printf("=== Hold on i'll swap with \tbroken one ===\n");
	borken_swap(n,m);
	printf("n = %d\n", n);
	printf("m = %d\n", m);
	printf("=== Hold on i'll swap with \t working one ===\n");
	working_swap(&n, &m);
	printf("n = %d\n", n);
	printf("m = %d\n", m);
}