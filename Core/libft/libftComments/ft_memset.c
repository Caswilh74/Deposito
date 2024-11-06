/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:55:35 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:55:46 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a block of memory with a specified byte value.
 *
 * @param b Pointer to the memory block to fill.
 * @param c The byte value to set (cast to unsigned char).
 * @param len The number of bytes to set.
 * @return A pointer to the filled memory block.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*t;

	t = (unsigned char *) b; // Cast the input pointer to unsigned char
	while (len > 0)
	{
		*(t++) = (unsigned char) c; // Set each byte to the specified value
		len--;
	}
	return (b); // Return the pointer to the filled memory block
}

/**
 * Summary of ft_memset:
 * 
 * The ft_memset function fills a specified number of bytes in a memory block 
 * with a given byte value. It returns a pointer to the original memory block 
 * after the operation. This function is commonly used to initialize memory 
 * or to reset memory contents to a specific value.
 */
