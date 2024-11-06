/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:38:46 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:54:28 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Safely copies memory from one location to another, handling overlapping areas.
 *
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block.
 * @param len The number of bytes to copy.
 * @return A pointer to the destination memory block.
 */

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*c_src;
	unsigned char	*c_dest;
	size_t			i;

	i = 0;
	// Return NULL if both pointers are NULL
	if (!dest && !src)
		return (0);
	c_src = (unsigned char *) src; // Cast the source pointer
	c_dest = (unsigned char *) dest; // Cast the destination pointer
	// Copy memory backwards if destination is above source
	if (c_dest > c_src)
	{
		while (len-- > 0)
			c_dest[len] = c_src[len]; // Copy backwards
	}
	else // Copy forwards
	{
		while (i < len)
		{
			c_dest[i] = c_src[i]; // Copy byte by byte
			i++;
		}
	}
	return (dest); // Return the destination pointer
}

/**
 * Summary of ft_memmove:
 * 
 * The ft_memmove function copies a specified number of bytes from a source 
 * memory block to a destination memory block, safely handling overlapping 
 * memory regions. It checks for NULL pointers and allows for both forward 
 * and backward copying, depending on the relative positions of the source 
 * and destination. This function is useful for scenarios where memory 
 * regions may overlap, ensuring data integrity during the copy.
 */
