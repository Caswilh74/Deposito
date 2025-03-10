/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:49:40 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/28 14:34:00 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	s_length;

	s_length = ft_strlen(s);
	dup = ft_calloc(s_length + 1, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, s_length + 1);
	return (dup);
}
