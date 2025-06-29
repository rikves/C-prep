/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:16:08 by skoulal           #+#    #+#             */
/*   Updated: 2025/06/29 16:40:46 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	m;
	int	n;
	int	o;

	m = 48;
	while (m <= 55)
	{
		n = m + 1;
		while (n <= 56)
		{
			o = n + 1;
			while (o <= 57)
			{
				print_comb(m, n, o);
				o++;
			}
			n++;
		}
		m++;
	}
}
