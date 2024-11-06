/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:07:10 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:40:06 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function to each character of a string and creates a new string 
 * with the results.
 *
 * @param s The string to be transformed.
 * @param f The function to apply to each character, which takes an index 
 *          and a character as parameters and returns a character.
 * @return A new string resulting from applying the function to each character 
 *         of the input string, or NULL if the allocation fails or if 
 *         the input string or function is NULL.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	result = malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))  // Iterate through the input string
	{
		result[i] = (*f)(i, s[i]); // Apply the function to each character
		i++;
	}
	result[i] = '\0';
	return (result);
}

/**
 * Summary of ft_strmapi:
 * 
 * The ft_strmapi function takes a string and a transformation function 
 * as input, applying the function to each character of the string along 
 * with its index. It constructs a new string based on the results of 
 * the function application. The function handles memory allocation 
 * for the new string and returns NULL if the input string or function 
 * is NULL or if memory allocation fails. The new string is always 
 * null-terminated.
 */

