/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:14:40 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/23 13:31:04 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*tmp_ptr;
	
	tmp_ptr = (unsigned char *) ptr;
	
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		len--;
	}
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