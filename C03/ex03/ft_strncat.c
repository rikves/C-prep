/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:41:08 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/01 16:51:37 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	int	i;
	int	j;

	size = 0;
	i= 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((src[j] != '\0') && (size < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
		size++;
	}
	dest[i] = '\0';
	return (dest);
}
