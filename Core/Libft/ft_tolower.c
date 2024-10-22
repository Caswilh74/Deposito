/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:21:43 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/22 11:23:25 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		{
			c += 32;
		}
	return (c);
}
/*
int	main(void)
{
	#include <stdio.h>
	printf("hello %c", ft_tolower('b'));
	return (0);
}
*/