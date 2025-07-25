/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulti-test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoulal <skosalah1@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 03:32:01 by skoulal           #+#    #+#             */
/*   Updated: 2025/07/24 20:24:04 by skoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int 	n = 98;
	int 	*ptr1 = &n;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;

	// Display before modification
	printf("Before ft_ultimate_ft:\n");
	printf("n = %d\n", n);
	printf("Address of n: %p\n", &n);
	printf("Value through 9 levels: %d\n", *********ptr9);
	ft_ultimate_ft(ptr9);
	//Display after modification
	printf("\nAfter ft_ultimate_ft:\n");
	printf("n = %d\n", n);
	printf("Value through 9 levels: %d\n", *********ptr9);

	//Demonstrate that all pointers point to the same value
	printf("\nAll paths lead to the same value:\n");
	printf("n = %d\n", n);
	printf("*ptr1 = %d\n", *ptr1);
	printf("**ptr2 = %d\n", **ptr2);
	printf("***ptr3 = %d\n", ***ptr3);
	printf("****ptr4 = %d\n", ****ptr4);
	printf("*****ptr5 = %d\n", *****ptr5);
	printf("******ptr6 = %d\n", ******ptr6);
	printf("*******ptr7 = %d\n", *******ptr7);
	printf("********ptr8 = %d\n", ********ptr8);
	printf("*********ptr9 = %d\n", *********ptr9);
}