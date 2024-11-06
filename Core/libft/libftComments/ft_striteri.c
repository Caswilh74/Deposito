/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:26:27 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:23:57 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function to each character of a string, passing its index.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character, taking the index and the character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	// Iterate through the string and apply the function to each character
	while (s[i])
	{
		f(i, &s[i]); // Call the function with the index and the character
		i++;
	}
}
/**
 * Summary of ft_striteri:
 * 
 * The ft_striteri function iterates over a string, applying a specified 
 * function to each character. The function receives the index of the character 
 * and a pointer to the character itself. This is useful for modifying 
 * characters in place or performing operations that depend on the character's 
 * position in the string.
 */

