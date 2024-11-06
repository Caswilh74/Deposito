/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:37:49 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:19:21 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is a digit (0-9).
 *
 * @param d The character (as an integer) to check, typically its ASCII value.
 * @return 1 if the character is a digit (0-9), otherwise 0.
 */

int	ft_isdigit(int d)
{
	// Check if 'd' falls within the ASCII range for digits (0-9).
	if (d >= 48 && d <= 57)
		return (1); // Return 1 if 'd' is a digit.
	return (0);
}

/**
 * Summary of ft_isdigit:
 * 
 * The ft_isdigit function checks whether a given integer 
 * (representing an ASCII value) corresponds to a digit 
 * character (0-9). It returns 1 if the value is within the 
 * digit range and 0 otherwise. This function is useful for 
 * validating numeric input.
 */

