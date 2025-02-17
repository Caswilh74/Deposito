/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:27:52 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/20 14:00:30 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** ==========================================================
**                         Printing
** ==========================================================
*/

void	ft_putchar_count(int c, int *count);
void	ft_putstr_count(char *str, int *count);
void	ft_putptr_count(void *ptr, int *count);
void	ft_putnbr_count(int nbr, int *count);
void	ft_putnbr_unsigned_count(unsigned int nbr, int *count);
void	ft_put_hex_count(unsigned long ptr, const char *hex_digits, int *count);

/*
** ==========================================================
**                         FT_Printf
** ==========================================================
*/

int		ft_printf(const char *str, ...);

#endif //FT_PRINTF_H
