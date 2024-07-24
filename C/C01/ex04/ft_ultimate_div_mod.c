/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:41:45 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/18 16:15:43 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a;  
	int	b;
	int	*pta;
	int *ptb;
	
	a = 10;
	b = 10;
	pta = &a;
	ptb = &b;	
	ft_ultimate_div_mod(pta, ptb);
	ft_putchar('0'+ a);
	ft_putchar(42);
	ft_putchar('0'+ b);
}
*/	