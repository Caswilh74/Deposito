/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:12:32 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/30 15:02:25 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result  == nb)
		return (result);
	return (0);
}
/*
int	main(void)
{
	printf("The Square Root is: %i", ft_sqrt(49));
	return(0);
}
*/