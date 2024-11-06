/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:18:05 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:22:20 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a string by allocating sufficient memory and copying the content.
 *
 * @param s The string to duplicate.
 * @return A pointer to the newly allocated string, or NULL if allocation fails.
 */

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	// Allocate memory for the duplicate string
	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	// Copy the string content to the newly allocated memory
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0'; // Null-terminate the duplicated string
	return (dest); // Return the pointer to the duplicated string
}

/**
 * Summary of ft_strdup:
 * 
 * The ft_strdup function creates a duplicate of a given string by allocating 
 * new memory and copying the string's content into it. It returns a pointer 
 * to the newly allocated string or NULL if memory allocation fails. This 
 * function is useful for creating independent copies of strings for further 
 * manipulation without affecting the original.
 */
