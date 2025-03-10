/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:00:18 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/28 17:10:59 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	trimmed_len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	trimmed_len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		trimmed_len--;
	}
	while (trimmed_len && ft_strchr(set, s1[trimmed_len - 1]))
		trimmed_len--;
	result = (char *)malloc(trimmed_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, trimmed_len + 1);
	return (result);
}
