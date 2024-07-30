/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:56:48 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/30 13:21:36 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power -1 == 0)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	printf("result: %i", ft_recursive_power(8, 2));
}
*/