/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:53:03 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 11:38:46 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Concatenates two strings, ensuring the destination buffer is not overflowed.
 *
 * This function appends the `src` string to the `dest` string, up to a maximum
 * size specified by `destsize`. It ensures that the resulting string is null-terminated.
 *
 * @param dest The destination string to which `src` will be appended.
 * @param src The source string to append to `dest`.
 * @param destsize The total size of the `dest` buffer.
 * @return The total length of the string that would have been created
 *         if there were enough space, not including the null terminator.
 */

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
        size_t 	dest_l;
        size_t  src_l;
        size_t  to_copy;

        src_l = ft_strlen(src);
        // If both dest and destsize are zero, return the length of src
        if (!dest && !destsize)
                return (src_l);
      	dest_l = ft_strlen(dest);
        // If destsize is less than or equal to dest length, return src length + destsize
        if (destsize <=	dest_l)
                return (src_l + destsize);
        // Calculate how much we can copy from src
        to_copy = destsize -	dest_l - 1;
        dest +=	dest_l; // Move the pointer to the end of dest
        // Copy from src to dest while there is space
        while (to_copy-- > 0 && *src)
                *dest++ = *src++;
        *dest = '\0';
        return 	(dest_l + src_l);
}

