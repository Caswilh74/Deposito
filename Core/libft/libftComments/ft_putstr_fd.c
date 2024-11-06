/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:39:45 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 10:51:15 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs a string to the specified file descriptor.
 *
 * @param s The string to output.
 * @param fd The file descriptor to write to (e.g., standard output, file).
 */

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}

/**
 * Summary of ft_putstr_fd:
 * 
 * The ft_putstr_fd function writes a string to a specified file descriptor 
 * character by character. This function is useful for outputting text to 
 * different outputs, such as the console or files, by specifying the 
 * appropriate file descriptor.
 */
