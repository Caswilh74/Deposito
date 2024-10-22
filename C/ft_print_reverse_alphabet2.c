/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:47:31 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/17 17:25:14 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
void	ft_putchar(char r);
	char r = 122;

	while (r >= 97)
	{
		write(1, &r, 1);
		r--;
	}
}
int		main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}