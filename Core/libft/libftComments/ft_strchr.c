/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:53:48 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 11:31:15 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Locates the first occurrence of a character in a string.
 *
 * @param s The string to search in.
 * @param c The character to find (passed as an int).
 * @return A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found. If the character is the
 *         null terminator, returns a pointer to the end of the string.
 */


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			char_tofind;

	i = 0;
	char_tofind = (char ) c; // Cast int to char
	while (s[i])
	{
		// If the character matches, return a pointer to its location
		if (s[i] == char_tofind)
			return ((char *) &s[i]);
		i++; // Move to the next character
	}
	// If searching for the null terminator, return its position
	if (char_tofind == '\0')
		return ((char *) &s[i]);
	// Return NULL if the character is not found
	return (NULL);
}

/*
 * Summary
 * This function searches for the first instance of the character 'c'
 * in the string 's'. If found, it returns a pointer to that character.
 * If 'c' is the null terminator, it returns a pointer to the end of the string.
 * If the character is not found, it returns NULL.
*/
