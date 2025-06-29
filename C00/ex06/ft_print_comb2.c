/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:50:57 by skoulal           #+#    #+#             */
/*   Updated: 2025/06/29 17:07:01 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb2(int i, int j)
{
	ft_putchar(i / 10 + 48);
	ft_putchar(i % 10 + 48);
	ft_putchar(' ');
	ft_putchar(j / 10 + 48);
	ft_putchar(j % 10 + 48);
	if (i != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	m;
	int	n;

	m = 0;
	while (m <= 98)
	{
		n = m + 1;
		while (n <= 99)
		{
			if (m < n)
			{
				print_comb2(m, n);
			}
			n++;
		}
		m++;
	}
}
