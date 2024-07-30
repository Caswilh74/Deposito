/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:12:32 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/30 13:25:18 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
		return (0);
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
/*
int	main(void)
{
	printf("The Square Root is: %i", ft_sqrt(49));
	return(0);
}
*/