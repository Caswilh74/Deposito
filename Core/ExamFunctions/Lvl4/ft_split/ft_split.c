/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:36:43 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:36:45 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*strncpy(char *des, char *src, int n)
{
	int	i = 0;

	while (i < n && src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int	wc = 0;
	int	start = 0;
	char	**out;
	int	k = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	out = malloc(sizeof(char *) * (wc + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > start)
		{
			out[k] = malloc(sizeof(char) * (i - start + 1));
			if (!out[k])
			{
				while (k >= 0)/////////////////freeout all
				{
					free(out[k]);
					k--;
				}
				free(out);
				return (NULL);
			}
			strncpy(out[k], &str[start], (i - start));//&the address of the fist c
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}