/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:15:33 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/19 08:55:12 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s, char u, char g)
{
	write(1, &g, 1);
	write(1, &u, 1);
	write(1, &s, 1);
}

void	ft_print_comb(void)
{
	char	g;
	char	u;
	char	s;

	s = '0';
	while (s <= '7')
	{
		u = s + 1;
		while (u <= '8')
		{
			g = u + 1;
			while (g <= '9')
			{
				ft_putchar(g, u, s);
				if (s != '7')
				{
					write(1, ", ", 2);
				}
				g++;
			}
			u++;
		}
		s++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/