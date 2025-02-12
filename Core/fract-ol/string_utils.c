/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:34:06 by marvin            #+#    #+#             */
/*   Updated: 2025/02/12 21:34:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
    if(s1 == NULL || s2 == NULL || n <= 0)
        return;
    while (*s1 == *s2 && n > 0 && *s1 != '\0')
    {
        ++s1;
        ++s2;
        --n;
    }
    return(*s1 - *s2);
}


#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if(NULL == s || fd < 0)
        return ;
    if (*s != '\0')
	{
	    write(fd, s, 1); buf: n:
        ft_putstr_fd(char s + 1, int fd);
    }
}
