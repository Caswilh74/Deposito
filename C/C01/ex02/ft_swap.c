/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:39:36 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/18 13:08:36 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_swap(int *a, int *b)
{
	int	gu;

	gu = *a;
	*a = *b;
	*b = gu;
}
/*
int main ()
{
	int num1 = 5;
	int num2 = 10;

	printf("antes da troca: num1 = %d, num2 = %d\n", num1, num2);
	
	ft_swap(&num1, &num2);
	
	printf("Depois da troca: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
*/