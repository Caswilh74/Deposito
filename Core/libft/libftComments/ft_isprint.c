/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:50:11 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:20:44 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is a printable character.
 *
 * @param c The character (as an integer) to check, typically its ASCII value.
 * @return 1 if the character is printable (space to tilde), otherwise 0.
 */

int	ft_isprint(int c)
{
	// Check if 'c' falls within the ASCII range for printable characters (32-126).
	if (c >= 32 && c <= 126)
		return (1); // Return 1 if 'c' is a printable character.
	return (0); // Return 0 if 'c' is not a printable character.
}

/**
 * Summary of ft_isprint:
 * 
 * The ft_isprint function checks whether a given integer 
 * (representing an ASCII value) corresponds to a printable 
 * character. It returns 1 if the value is within the 
 * printable range (32 to 126) and 0 if it is outside this 
 * range. This function is useful for validating character 
 * input that can be displayed to users.
 */

