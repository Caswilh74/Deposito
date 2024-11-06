/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:42:30 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 10:44:25 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs a string to the specified file descriptor followed by a newline.
 *
 * @param s The string to output.
 * @param fd The file descriptor to write to (e.g., standard output, file).
 */

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/**
 * Summary of ft_putendl_fd:
 * 
 * The ft_putendl_fd function writes a string to a specified file descriptor, 
 * appending a newline character at the end. This function is useful for 
 * outputting complete lines of text to different outputs, such as the console 
 * or files, by specifying the appropriate file descriptor.
 */
