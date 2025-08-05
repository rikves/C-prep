/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:55:56 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/04 16:22:25 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return 0;
	}
	else if (power == 0)
	{
		return 1;
	}
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return result;
}
