/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:27:59 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/21 10:13:54 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * Prints the given arg in the stdout.
 *
 * @param args va_list containing all the Values for '%'.
 * @param str Main string containing the '%'.
 * @param count Pointer to printed digits counter.
 */
void	ft_handle_arg(va_list args, const char *str, int *count)
{
	if (*str == 'c')
		ft_putchar_count(va_arg(args, int), count);
	else if (*str == 's')
		ft_putstr_count(va_arg(args, char *), count);
	else if (*str == 'p')
		ft_putptr_count(va_arg(args, void *), count);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_count(va_arg(args, int), count);
	else if (*str == 'u')
		ft_putnbr_unsigned_count(va_arg(args, unsigned int), count);
	else if (*str == 'x')
		ft_put_hex_count(va_arg(args, unsigned int), "0123456789abcdef",
			count);
	else if (*str == 'X')
		ft_put_hex_count(va_arg(args, unsigned int), "0123456789ABCDEF",
			count);
	else if (*str == '%')
		ft_putchar_count('%', count);
}

/**
 * Replicates the printf function from cLib
 *
 * @param str Main string containing the '%'.
 * @param ... Values for the '%'s.
 * @return Returns the count of the printed digits.
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			ft_handle_arg(args, str, &count);
		}
		else
			ft_putchar_count(*str, &count);
		str++;
	}
	return (count);
}
