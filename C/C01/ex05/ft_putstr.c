/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:53:56 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/18 16:16:40 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != 0)
	{
		x++;
	}
	write(1, str, x);
}
/*
int	main(void)
{
	char	*str;

	str = "Gustavo";
	ft_putstr(str);
	return (0);
}
*/