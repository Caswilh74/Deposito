/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:52:56 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:38:36 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of a string.
 *
 * @param s The string for which to calculate the length.
 * @return The length of the string (excluding the null terminator).
 */

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l]) // Iterate through the string until the null terminator
		l++;
	return (l);
}

/**
 * Summary of ft_strlen:
 * 
 * The ft_strlen function computes the length of a given string, 
 * returning the number of characters before the null terminator. 
 * It iterates through the string until it reaches the null terminator, 
 * counting the characters. This function does not count the null terminator 
 * itself and assumes that the input string is valid (not NULL).
 */
