/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:59:41 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/29 14:31:14 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d && (s + len) > d)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len--)
			*d++ = *s++;
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

    printf("dstination after memmove: %s\n", dst);

    // Test overlapping scenario
    memmove(src + 6, src, strlen(src) + 1);  // Move the string within itself

    printf("Source after overlapping memmove: %s\n", src);

    return 0;
}
*/