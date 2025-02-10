/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:05:55 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/03 11:21:58 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int	max = tab[0];
	int i = 0;
	while (i < (int) len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}