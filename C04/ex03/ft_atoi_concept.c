/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_concept.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:21:09 by skoulal           #+#    #+#             */
/*   Updated: 2025/08/15 10:11:29 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// $ >./ a.out " 	---+--+1234ab567"
// -1234

int ft_atoi(char *str)
{
	int number;
	int parity;

	parity = 0;
	number = 0;
	// string can have many spaces -> isspace -> SKIP THEM
	while ((*str >= 9 && *str <= 13) || (*str) == 32)
	{
		str++;
	}
	// WE DONT KNOW HOW MUCH - AND +, SO -> IF (EVEN (-)) -> NUM IS POSITIVE ELSE -> (THE OPPOSITE)
	//  MOVE THROUGH THE STRING IN ORDER TO CALCULATE THE AMOUNT OF (-)
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	// CHECK ALL NUMBER AND STOCK IN ACCUMULATOR NUMBER
	while (*str >= '0' && *str <= '9')
	{
		// SHIFT THE NUMBER BASE10 (ONES,TENS...)
		number *= 10;
		// CONVERT FROM CHAR TO INT EXP: (49 - 48 = 1)
		number += *str - 48;
		str++;
	}

	if ( ! (parity % 2)) // CHECK IF EVEN EXP (if(!(1)) cuz 5 % 2 = 1)
		return (number);
	return (-number);
}

int main(int argc, char **argv)
{
	char *str = argv[1];

	int num = ft_atoi(str);

	printf("%d", num);
}