/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:15:00 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:24:15 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the size needed to represent an integer as a string.
 *
 * @param n The integer to evaluate.
 * @return The number of characters needed, including the null terminator.
 */

static size_t	get_size(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size = 1; // Count for the negative sign
		n = -n; // Convert to positive for further processing
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

/**
 * Fills the result string with the characters of the integer.
 *
 * @param result The string to fill with the integer representation.
 * @param num The integer to convert to string.
 * @param size The size of the result string.
 * @return A pointer to the filled string, or NULL on failure.
 */

static char	*fill_itoa(char *result, long num, size_t size)
{
	if (!result)
		return (NULL);
	if (num == 0)
	{
		result[0] = '0'; // Handle zero case
		return (result);
	}
	if (num < 0)
	{
		result[0] = '-'; // Place the negative sign
		num = -num; // Convert to positive for processing
	}
	while (num > 0)
	{
		result[size--] = (num % 10) + '0'; // Fill the string from the end
		num /= 10;
	}
	return (result);
}

/**
 * Converts an integer to a string representation.
 *
 * @param n The integer to convert.
 * @return A pointer to the string representation of the integer,
 *         or NULL if memory allocation fails.
 */

char	*ft_itoa(int n)
{
	char			*result;
	long			num;
	size_t			size;

	num = (long) n;
	size = get_size(num);
	// Handle the edge case for the minimum integer value
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	result[size--] = '\0';
	return (fill_itoa(result, num, size));
}
/**
 * Summary of ft_itoa:
 * 
 * The ft_itoa function converts an integer to its string representation.
 * It handles both positive and negative integers, as well as the special
 * case for the minimum integer value (-2147483648). The function allocates
 * memory for the resulting string, which must be freed by the caller. It 
 * returns a pointer to the string representation of the integer, or NULL 
 * if memory allocation fails.
 */
