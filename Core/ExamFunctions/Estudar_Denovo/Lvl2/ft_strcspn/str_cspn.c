/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cspn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:42:57 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/30 09:47:56 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t count = 0;
	size_t i = 0;
	
	while(*s)
	{
		while(reject[i] && *s != reject[i])
			i++;
		if(reject[i] != '\0')
			return(count);
		i = 0;
		count++;
		s++; 
	}
	return(count);
}