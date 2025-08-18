/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:04:55 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/06 18:56:32 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	while (--argc)
		ft_putstr(argv[argc]);
	return (0);
}
