/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:37:41 by skoulal           #+#    #+#             */
/*   Updated: 2025/07/23 02:43:54 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i,;

	i = 0;
	swaps = size  / 2;
	while (swaps--)
	{
		ft_swap(&(*(tab+i++))), &tab(--size);
	}
}

int	main(void)
{
	int arr[10]  = {45, 34, 24, 14, 30, 50, 20, 19, 49, 12};
	int	i = 0;
	while (i < 10)
	{
		printf("%d", arr[i++]);
	}

	ft_rev_int_tab(arr, sizeof(arr) / sizeof(arr[0]));
	while (i < 10)
	{
		printf("%d", arr[i++]);
	}
}