/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:28:27 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 10:42:09 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies memory from one location to another.
 *
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block.
 * @param n The number of bytes to copy.
 * @return A pointer to the destination memory block.
 */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *t_dest;
    unsigned char *t_src;

    // Return dest if both pointer are NULL
    if (!dest && !src)
        return dest;

    t_dest = (unsigned char *)dest;
    t_src = (unsigned char *)src;

    // Perform the copy
    while (n--)
        *t_dest++ = *t_src++;

    return dest; // Return the original destination pointer
}

/**
 * Summary of ft_memcpy:
 * 
 * The ft_memcpy function copies n bytes from a source memory block to a 
 * destination memory block. It returns a pointer to the destination block. 
 * The function checks for NULL pointers and handles the case where n is 0 
 * by returning the destination pointer. This function is essential for 
 * performing direct memory copying in various applications.
 */
