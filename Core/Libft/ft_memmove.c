/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:59:41 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/24 15:36:58 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *ptr_dst;
	char *ptr_src;
	size_t	i;
	
	if (dst == 0 || src == 0)
		return (NULL);
	ptr_dst = (char *) dst;
	ptr_src = (char *) src;
	i = 0;
	
	if (ptr_dst > ptr_src)
	{
		while (len-- > 0)
		{
			ptr_dst[len] = ptr_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
    char src[50] = "Hello, Gustavo Rules!";
    char dst[45];

    printf("Source before memmove: %s\n", src);

    // Call memmove with overlapping memory regions
    ft_memmove(dst, src, strlen(src) + 1);  // +1 to include the null terminator

    printf("Destination after memmove: %s\n", dst);

    // Test overlapping scenario
    memmove(src + 6, src, strlen(src) + 1);  // Move the string within itself

    printf("Source after overlapping memmove: %s\n", src);

    return 0;
}
*/