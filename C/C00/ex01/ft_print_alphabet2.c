/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:30:10 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/17 16:42:54 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
void	ft_putchar(char g);
	char g = 97;

	while (g <= 122)
	{
		write(1, &g, 1);
		g++;
	}
	
}

int		main(void)
{
	ft_print_alphabet();
	return(0);
}