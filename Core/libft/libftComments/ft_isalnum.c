/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:44:54 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:10:23 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is alphanumeric (either a letter or a digit).
 *
 * @param an The character (as an integer) to check, typically its ASCII value.
 * @return 1 if the character is alphanumeric, otherwise 0.
 */

int	ft_isalnum(int an)
{
	// Check if the character is either an alphabetic character or a digit
	if (ft_isalpha(an) || ft_isdigit(an))
		return (1); // Return 1 (true) if the character is alphanumeric
	return (0); // Return 0 (false) if the character is not alphanumeric
}
/*
The ft_isalnum function determines whether a given character
(represented as an integer) is alphanumeric,
meaning it checks if the character is either a
letter (using ft_isalpha) or a digit
(using ft_isdigit).
It returns 1 if the character meets either
condition, indicating that it is alphanumeric,
and 0 if it does not.
*/
