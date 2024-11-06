/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:47:00 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:48:27 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the last occurrence of a character in a string.
 *
 * @param s The string to be searched.
 * @param c The character to find in the string.
 * @return A pointer to the last occurrence of the character in the string, 
 *         or NULL if the character is not found. If c is the null character, 
 *         a pointer to the null terminator is returned.
 */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*result;
	char			char_tofind;

	char_tofind = (char) c; // Cast c to a char
	result = NULL;
	i = 0;
	while (s[i]) // Iterate through the string until the null terminator
	{
		if (s[i] == char_tofind) // If the character matches
			result = (char *) &s[i]; // Update result to the current position
		i++;
	}
	// If searching for the null character, set result to the null terminator
	if (char_tofind == '\0')
		result = (char *) &s[i];
	return (result); // Return the last occurrence or NULL
}

/**
 * Summary of ft_strrchr:
 * 
 * The ft_strrchr function searches for the last occurrence of a specified 
 * character (c) in a given string (s). If the character is found, it returns 
 * a pointer to its last occurrence. If the character is the null terminator, 
 * it returns a pointer to the end of the string. If the character is not found, 
 * it returns NULL. This function allows for reverse searching within the string.
 */

