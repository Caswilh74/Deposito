/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:45:41 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:59:13 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs an integer to the specified file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor to write to (e.g., standard output, file).
 */

void	ft_putnbr_fd(int n, int fd)
{
	long int	num; // Use long to handle the minimum integer value

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd); // Print the negative sign
		num *= -1; // Convert to positive for further processing
	}
	if (num > 9)
		ft_putnbr_fd (num / 10, fd); // Recursively call for higher digits
	ft_putchar_fd (num % 10 + 48, fd); // Output the last digit
}

/**
 * Summary of ft_putnbr_fd:
 * 
 * The ft_putnbr_fd function writes an integer to a specified file descriptor. 
 * It handles negative numbers by printing a minus sign and converts the number 
 * to its absolute value for processing. The function recursively processes each 
 * digit and outputs them one by one. This is useful for outputting integer 
 * values to various outputs, such as the console or files.
 */
