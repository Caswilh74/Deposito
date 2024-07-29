/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:14:26 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/29 14:51:15 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int	nb, int	power)
{
	int	res;
	
	res = 1;
	if(power < 0)
		return (0);
	while (power > 0)
	{	res *= nb;
		power--;		
	}
	return(res);
}
/*
int	main(void)
{
	printf("res: %i",ft_iterative_power(3,5));
	return (0);
}
*/