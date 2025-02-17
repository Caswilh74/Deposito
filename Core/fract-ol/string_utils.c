/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:34:06 by marvin            #+#    #+#             */
/*   Updated: 2025/02/13 09:28:08 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
    if(s1 == NULL || s2 == NULL || n <= 0)
        return (0);
    while (*s1 == *s2 && n > 0 && *s1 != '\0')
    {
        ++s1;
        ++s2;
        --n;
    }
    return(*s1 - *s2);
}


void	ft_putstr_fd(char *s, int fd)
{
	if(NULL == s || fd < 0)
        return ;
    if (*s != '\0')
	{
	    write(fd, s, 1);
        ft_putstr_fd(s + 1, fd);
    }
}
