/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:09:58 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 11:01:18 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an uppercase letter to its lowercase equivalent.
 *
 * @param c The character (as an integer) to convert.
 * @return The lowercase equivalent of the character if it is an uppercase letter; 
 *         otherwise, it returns the character unchanged.
 */

int	ft_tolower(int c)
{
	// Check if the character is an uppercase letter (A-Z)
	if (c >= 65 && c <= 90)
		return (c + 32); // Convert to lowercase (a-z) by adding 32 to its ASCII value
	return (c); // Return the character unchanged if it is not uppercase
}
/**
 * Summary of ft_tolower:
 * 
 * The ft_tolower function takes an integer representing a character and 
 * converts it to its lowercase equivalent if it is an uppercase letter 
 * (A-Z). If the character is not an uppercase letter, it returns the 
 * character unchanged. This function is useful for case-insensitive 
 * comparisons and conversions.
 */

