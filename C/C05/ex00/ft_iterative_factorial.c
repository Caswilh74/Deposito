/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 07:31:15 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/29 08:51:51 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i = 0;
	int n = 1;
	
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i != nb)
	{
		n *= (nb -i);
		i++;
	}
	return (n);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
	return 0;
}
*/