/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:46:31 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 08:22:38 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 * Converts a string to an integer.
 * This function skips leading whitespace, handles optional '+' or '-' signs,
 * and processes the numerical characters until a non-numeric character is encountered.
 *
 * @param nptr The string to be converted.
 * @return The converted integer value.
 */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	result; // Variable to store the final integer result
	int	sign; // Variable to store the sign of the result

	result = 0;
	sign = 1;
	// Skip any leading whitespace
	while (ft_isspace(*nptr))
		nptr++;
	// Check for an optional '+' or '-' sign
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1; // If negative, invert the sign
		nptr++; // Move to the next character
	}
	// Convert the numerical characters to an integer
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*nptr - '0'); // Update result with the current digit
		nptr++; // Move to the next character
	}
	return (sign * result); // Return the final result, accounting for sign
}
/*Summary:
The ft_atoi function converts a string representation
 of an integer to an actual integer value.
 It ignores leading whitespace, checks for a sign indicator,
 and processes the numerical characters to build the final integer result.*/
