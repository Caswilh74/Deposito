/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:08:56 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/30 11:12:14 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	j = 0;
	char *strcpy;

	while (src[i])
		i++;
	strcpy = malloc(sizeof(*strcpy) * (i + 1));
	if(strcpy != NULL)
	{
		while(src[j])
		{
			strcpy[j] = src[j];
			j++;
		}
		strcpy[j] = '\0';
	}
	return(strcpy);
}