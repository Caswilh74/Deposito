/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:12:50 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/18 16:13:27 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char a)
{
	write(1, &a, 1);
}
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	a;
	int	*nbr;

	a = 10;
	nbr = &a;
	ft_ft(nbr);
	ft_putchar('0' + a / 10);
	ft_putchar(48 + a % 10);
	return (0);
}
*/