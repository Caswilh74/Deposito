/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:19:44 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/24 13:17:13 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	needle = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		if (len < needle + i)
			return (NULL);
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && i + j < len && haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}