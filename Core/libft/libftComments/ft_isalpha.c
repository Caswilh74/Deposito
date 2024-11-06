/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:28:51 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:16:55 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is an alphabetic character
 * (either uppercase or lowercase).
 *
 * @param a The character (as an integer) to check, typically its ASCII value.
 * @return 1 if the character is alphabetic (A-Z or a-z), otherwise 0.
 */

int	ft_isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1); // Return 1 if 'a' is an alphabetic character.
	return (0); // Return 0 if 'a' is not an alphabetic character.
}

/*
Summary
The ft_isalpha function checks whether a given integer (representing an ASCII value)
corresponds to an alphabetic character.
It returns 1 if the character is a letter (either uppercase A-Z or lowercase a-z) and 0 otherwise.
*/