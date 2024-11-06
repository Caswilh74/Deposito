/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:31:42 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:45:56 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a character in a block of memory.
 *
 * @param s The memory block to search.
 * @param c The character to find, represented as an integer.
 * @param n The number of bytes to search.
 * @return A pointer to the first occurrence of the character, or NULL if not found.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	x;
	size_t			i;

	str = (unsigned char *) s; // Cast the input pointer to unsigned char
	x = (unsigned char) c; // Cast the character to unsigned char
	i = 0;
	// Iterate through the memory block
	while (i < n)
	{
		if (str[i] == x) // Check for the character match
			return ((void *) &str[i]); // Return a pointer to the found character
		i++;
	}
	return (NULL); // Return NULL if the character is not found
}
