/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:47:21 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:18:27 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is an ASCII character.
 *
 * @param a The character (as an integer) to check, typically its ASCII value.
 * @return 1 if the character is an ASCII character (0-127), otherwise 0.
 */

int	ft_isascii(int a)
{
	// Check if 'a' falls within the ASCII range (0 to 127).
	if (a >= 0 && a <= 127)
		return (1); // Return 1 if 'a' is an ASCII character.
	return (0);
}
/**
 * Summary of ft_isascii:
 * 
 * The ft_isascii function checks whether a given integer 
 * (representing an ASCII value) corresponds to an ASCII 
 * character. It returns 1 if the value is within the ASCII 
 * range (0 to 127) and 0 if it is outside this range. This 
 * function is useful for validating characters in contexts 
 * where only ASCII input is acceptable.
 */

