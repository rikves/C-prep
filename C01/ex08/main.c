#include <stdio.h>

int main(void)
{
	int arr[10] = {45, 34, 24, 14, 30, 50, 20, 19, 41, 12}; // 9
	int i = 0;
	while (i < 10)
	{
		printf(" %d ", arr[i]);
		i++;
	}

	ft_sort_int_tab(arr, sizeof(arr) / sizeof(arr[0]));

	printf("\n");
	i = 0;
	while (i < 10)
	{
		printf(" %d ", arr[i]);
		i++;
	}
	printf("\n");
}