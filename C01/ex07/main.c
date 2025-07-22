#include "yeah.h"


int	main(void)
{
	int arr[10]  = {45, 34, 24, 14, 30, 50, 20, 19, 49, 12};
	int	i = 0;
	int	j = 0;
	while (i < 10)
	{
		printf("%d  ", arr[i++]);
	}

	ft_rev_int_tab(arr, sizeof(arr) / sizeof(arr[0]));
	printf("\n");
	while (j < 10)
	{
		printf("%d  ", arr[j++]);
	}
	printf("\n");
}