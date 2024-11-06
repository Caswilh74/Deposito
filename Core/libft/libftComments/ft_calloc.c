/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:06:12 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 08:36:37 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array of nmemb elements, each of size bytes, 
 * and initializes all bytes to zero.
 *
 * @param nmemb Number of elements to allocate.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*p; // Pointer to the allocated memory

	total_size = nmemb * size; // Calculate total memory size needed
	// Check for overflow: if size is non-zero and total_size is not equal to nmemb
	if (size && ((total_size /size) != nmemb))
		return (NULL);
	p = malloc(total_size); // Allocate the memory
	if (!p)
		return (NULL);
	ft_memset(p, 0, total_size); // Initialize the allocated memory to zero
	return (p); // Return the pointer to the allocated memory
}
/*
Summary:
The ft_calloc function allocates memory
for an array of nmemb elements, each of a
specified size, and initializes all allocated
bytes to zero.
It checks for potential overflow during
size calculations and returns
NULL if the memory allocation fails
or if an overflow is detected.
*/