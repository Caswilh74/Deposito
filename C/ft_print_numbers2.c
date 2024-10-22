/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:18:07 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/17 17:51:25 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
void	ft_putchar(char n);
	char n = 48;
	
	while (n <= 57)
	{
		write(1, &n, 1);
		n++;
	}	
}

int	main(void)
{
	ft_print_numbers();
	return(0);
}