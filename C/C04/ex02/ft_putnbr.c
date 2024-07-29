/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 13:58:02 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/29 07:06:49 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9 || nb == 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar('0' + nb);
	}
}
/*
int	main()
{
	ft_putnbr(-2147483648);
	write(1,"\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(9);
	write(1, "\n", 1);
	ft_putnbr(-74);
	write(1, "\n", 1);
	ft_putnbr(74);
	return(0);
}
*/