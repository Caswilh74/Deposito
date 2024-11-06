/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:58:46 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:54:55 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Trims specified characters from the beginning and end of a string.
 *
 * @param s1 The string to trim.
 * @param set The set of characters to be removed from the start and end.
 * @return A new string with the specified characters trimmed from both ends, 
 *         or NULL if the input string or set is NULL. The resulting string 
 *         is dynamically allocated and must be freed by the caller.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trim_l; // Length of the trimmed string
	char	*result; // Pointer to hold the resulting trimmed string

	if (!s1 || !set)
		return (NULL);
	trim_l = ft_strlen(s1); // Get the length of the original string
	// Trim characters from the start
	while (*s1 && ft_strchr(set, *s1)) // Move s1 forward while the character is in set
	{
		s1++;
		trim_l--; // Decrease the length
	}
	// Trim characters from the end
	while (trim_l && ft_strchr(set, s1[trim_l - 1])) // Check from the end
		trim_l--;
	result = malloc(trim_l + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, trim_l +1); // Copy the trimmed string to result
	return (result); // Return the trimmed string
}

/**
 * Summary of ft_strtrim:
 * 
 * The ft_strtrim function removes specified characters from both the beginning 
 * and end of a given string (s1). It dynamically allocates memory for the 
 * resulting trimmed string, which must be freed by the caller. If the input 
 * string or set of characters is NULL, the function returns NULL. The result 
 * contains only the characters that are not in the specified set.
 */

