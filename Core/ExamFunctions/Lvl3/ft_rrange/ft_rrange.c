/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:32:24 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:32:27 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len = 0;
	char	*range;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	if (end >= start)
	{
		while (i < len)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			range[i] = end;
			end++;
			i++;
		}
	}
	return (range);
}