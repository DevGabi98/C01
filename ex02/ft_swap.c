/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:02:58 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/18 15:15:18 by vhacman          ###   ########.fr       */
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

/*
int	main(void)
{
	int prova1;
	int prova2;

	prova1 = 3;
	prova2 = 5;

	printf ("questi e prova1: %d\n", prova1);
	printf ("questi e prova2: %d\n", prova2);
	ft_swap (&prova1, &prova2);
	printf ("questi e prova1: %d\n", prova1);
        printf ("questi e prova2: %d\n", prova2);
	return (0);
}
*/
