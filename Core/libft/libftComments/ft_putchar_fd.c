/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:37:57 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:56:17 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs a character to the specified file descriptor.
 *
 * @param c The character to output.
 * @param fd The file descriptor to write to (e.g., standard output, file).
 */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1); // Write the character to the specified file descriptor
}

/**
 * Summary of ft_putchar_fd:
 * 
 * The ft_putchar_fd function writes a single character to a specified file 
 * descriptor. It is useful for outputting characters to different outputs, 
 * such as the console or files, by specifying the appropriate file descriptor.
 */
