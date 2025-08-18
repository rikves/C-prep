/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:37:39 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/14 15:23:11 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int main(void)
// {
// 	int n = 20;
// 	int m = 4;

// 	ft_ultimate_div_mod(&n, &m);

// 	printf("%d\n", n);
// 	printf("%d\n", m);
// }