/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:55:55 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 11:00:13 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a substring from a given string, starting at a specified index 
 * and with a specified length.
 *
 * @param s The original string from which to create the substring.
 * @param start The starting index for the substring.
 * @param len The maximum length of the substring.
 * @return A newly allocated substring, or NULL if the input string is NULL 
 *         or if memory allocation fails. If the start index is beyond the 
 *         end of the string, an empty string is returned.
 */

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr; // Pointer to hold the resulting substring
	size_t	l; // Length of the original string

	if (!s)
		return (NULL);
	l = ft_strlen(s); // Get the length of the original string
	// If the start index is beyond the length of the string
	if (l <= start)
	{
		substr = malloc(1); // Allocate memory for an empty string
		if (!substr)
			return (NULL);
		substr[0] = '\0'; // Set the empty string
		return (substr);
	}
	// Adjust len if it exceeds the remaining length of the string
	if (len > l - start)
		len = l - start;
	substr = malloc(len + 1); 
	if (!substr)
		return (NULL);
	ft_memcpy (substr, s + start, len); // Copy the substring from the original string
	substr[len] = '\0';
	return (substr); // Return the resulting substring
}
/**
 * Summary of ft_substr:
 * 
 * The ft_substr function extracts a substring from a given string (s), starting 
 * at a specified index (start) and continuing for a specified length (len). If 
 * the starting index is greater than the length of the string, it returns an 
 * empty string. The function allocates memory for the new substring, which must 
 * be freed by the caller. If the input string is NULL or memory allocation fails, 
 * it returns NULL.
 */

