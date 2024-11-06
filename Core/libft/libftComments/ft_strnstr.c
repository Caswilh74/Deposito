/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:22:21 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:46:12 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a substring within a specified length of a string.
 *
 * @param big The main string to be searched.
 * @param little The substring to find within the main string.
 * @param len The maximum length to search within the main string.
 * @return A pointer to the first occurrence of little in big, or NULL if little 
 *         is not found or if len is 0.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *) big);
	while (i < len && big[i]) // Search through big up to len or until null terminator
	{
		j = 0;
		// Check if the substring matches
		while (i + j < len && big [i + j] && little[j]
			&& big[i + j] == little[j])
			j++; // Increment j while characters match
		// If we reached the end of little, we found a match
		if (!little[j])
			return ((char *)(big + i)); // Return the starting position of the match
		i++; // Move to the next character in big
	}
	return (NULL);
}
/**
 * Summary of ft_strnstr:
 * 
 * The ft_strnstr function searches for the first occurrence of a substring 
 * (little) within a specified length of a larger string (big). If the substring 
 * is found, it returns a pointer to its location in the main string. If the 
 * substring is empty, it returns the original string. If the substring is 
 * not found or the length is 0, it returns NULL. This function allows for 
 * controlled searching within a limited part of the string.
 */
