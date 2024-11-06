/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:03:55 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:49:35 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two blocks of memory.
 *
 * @param s1 The first block of memory to compare.
 * @param s2 The second block of memory to compare.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first 
 *         n bytes of s1 is found, respectively, to be less than, to match, 
 *         or be greater than the first n bytes of s2.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1; // Cast the first input pointer to unsigned char
	str2 = (unsigned char *) s2; // Cast the second input pointer to unsigned char

	i = 0;
	// Compare the memory blocks byte by byte
	while (i < n)
	{
		if (str1[i] != str2[i]) // Check for differences
		{
			return (str1[i] - str2[i]); // Re turn the difference if not equal
		}
		i++;
	}
	return (0); // Return 0 if the blocks are equal
}

/**
 * Summary of ft_memcmp:
 * 
 * The ft_memcmp function compares two blocks of memory, byte by byte, 
 * for up to n bytes. It returns an integer indicating the relationship 
 * between the two blocks: a negative value if the first block is less, 
 * zero if they are equal, and a positive value if the first block is 
 * greater. This function is useful for comparing binary data and 
 * checking for equality or order.
 */
