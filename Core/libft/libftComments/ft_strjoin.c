/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:36:36 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:26:10 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings into a newly allocated string.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A pointer to the newly allocated string containing the concatenation 
 *         of s1 and s2, or NULL if allocation fails or if either string is NULL.
 */

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	l1;
	size_t	l2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1); // Length of the first string
	l2 = ft_strlen(s2); // Length of the second string
	result = malloc(l1 + l2 + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	// Copy the first string into the result
	while (s1[i])
		result[j++] = s1[i++];
	i = 0;
	// Copy the second string into the result
	while (s2[i])
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}

/**
 * Summary of ft_strjoin:
 * 
 * The ft_strjoin function concatenates two strings, allocating new memory 
 * for the resulting string. It checks for NULL input and handles memory 
 * allocation, returning a pointer to the concatenated string or NULL in 
 * case of failure. This function is useful for combining strings for 
 * further processing or display.
 */
