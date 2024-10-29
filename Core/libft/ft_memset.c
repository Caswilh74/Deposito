/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:14:40 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/29 14:32:22 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *)ptr)[i++] = (unsigned char)c;
	return (ptr);
}
/*
int	main()
{
	char str[20] = "Hello, World!";
	printf("Original String: %s\n", str);
	
	ft_memset(str, 'G', 5);
	printf("Modified String: %s\n", str);
	return (0);
}
*/