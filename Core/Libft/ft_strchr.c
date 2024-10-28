/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:44:00 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/23 16:54:14 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char	cc;
	
	cc = (char) c;
	i= 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return (char*)(s + i);
		i++;
	}
	if (cc == '\0')
	{
		return (char *)(s + i);
	}
	return (NULL);
}