/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:39:35 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 11:42:07 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcpy - Copies the source string to the destination buffer.
 *
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * @destsize: The size of the destination buffer.
 *
 * Returns: The length of the source string.
 *          If destsize is greater than 0, it copies up to destsize - 1 characters
 *          from src to dest and null-terminates the destination.
 */
size_t ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t counter; // Counter for the length of src

    counter = 0;
    // Calculate the length of the source string
    while (src[counter])
        counter++;
    
    // If destsize is greater than 0, copy from src to dest
    if (destsize)
    {
        // Copy characters while there's space and null-terminate
        while (--destsize && *src)
            *dest++ = *src++;
        *dest = 0; // Null-terminate the destination string
    }
    return (counter); // Return the length of the source string
}

/*
 * Summary:
 * The ft_strlcpy function copies the source string to the destination buffer
 * up to destsize characters, ensuring the destination is null-terminated.
 * It returns the length of the source string, which allows the caller to 
 * check if the copy was truncated based on the size of the destination buffer.
 */



