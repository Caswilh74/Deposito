/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:06:21 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 11:02:09 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a lowercase letter to its uppercase equivalent.
 *
 * @param c The character (as an integer) to convert.
 * @return The uppercase equivalent of the character if it is a lowercase letter; 
 *         otherwise, it returns the character unchanged.
 */

int	ft_toupper(int c)
{
	// Check if the character is a lowercase letter (a-z)
	if (c >= 97 && c <= 122) 
		return (c - 32); // Convert to uppercase (A-Z) by subtracting 32 from its ASCII value
	return (c); // Return the character unchanged if it is not lowercase
}
/**
 * Summary of ft_toupper:
 * 
 * The ft_toupper function takes an integer representing a character and 
 * converts it to its uppercase equivalent if it is a lowercase letter 
 * (a-z). If the character is not a lowercase letter, it returns the 
 * character unchanged. This function is useful for case-insensitive 
 * comparisons and conversions.
 */

