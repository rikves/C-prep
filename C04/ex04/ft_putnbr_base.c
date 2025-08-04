/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:40:13 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/03 11:43:51 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nbr(int n, int base_value, char *symbols)
{
	long	nbr_long;

	nbr_long = n;
	if (nbr_long < 0)
	{
		nbr_long *= -1;
		ft_putchar('-');
	}
	if (nbr_long >= base_value)
		print_nbr(nbr_long / base_value, base_value, symbols);
	ft_putchar(symbols[nbr_long % base_value]);
}

int	char_twice(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return;
		base_value++;
	}
	if (base_value < 2)
		return ;
	if (char_twice(base))
		return ;
	print_nbr(nbr, base_value, base);
}
