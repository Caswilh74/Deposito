/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:06:15 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:44:27 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two strings up to a specified number of characters.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if 
 *         the first n characters of s1 are found to be less than, 
 *         to match, or to be greater than the first n characters of s2.
 *         If n is 0, the function returns 0.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i])) // Compare characters up to n or until null terminators
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i]) // Compare characters as unsigned
			return ((unsigned char) s1[i] - (unsigned char) s2[i]); // Return the difference if unequal
		i++;
	}
	return (0);
}

/**
 * Summary of ft_strncmp:
 * 
 * The ft_strncmp function compares two strings
 * lexicographically(refers to the way words or strings are arranged in a dictionary or in alphabetical order) 
 * up to a specified number of characters (n). If the strings are 
 * equal for the first n characters, it returns 0. If they differ, 
 * it returns a negative or positive value based on their difference. 
 * If n is 0, no comparison occurs, and the function returns 0. 
 * This function treats characters as unsigned to handle extended 
 * character sets correctly.
 */
