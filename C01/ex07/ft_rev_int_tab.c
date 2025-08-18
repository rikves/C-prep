/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:37:41 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/14 15:24:10 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_swap(int *a, int *b)
// {
// 	int	temp;

// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swaps;
	int	temp;

	i = 0;
	swaps = size / 2;
	while (swaps--)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int arr[10] = {45, 34, 24, 14, 30, 50, 20, 19, 49, 12};
	int i = 0;
	while (i < 10)
	{
		printf(" %d ", arr[i++]);
	}

	ft_rev_int_tab(arr, sizeof(arr) / sizeof(arr[0]));

	printf("\n");
	i = 0;
	while (i < 10)
	{
		printf(" %d ", arr[i++]);
	}
	printf("\n");
}