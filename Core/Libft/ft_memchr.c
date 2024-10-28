/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:21:34 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/23 17:52:39 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void*s, int c, size_t n)
{
	const unsigned char *ptr;
	unsigned char x;
	size_t i;
	
	ptr = (const unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == x)
			return ((void *)(ptr + i));		
		i++;
	}
	return (NULL);
}