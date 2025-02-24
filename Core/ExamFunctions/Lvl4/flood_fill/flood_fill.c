/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:54:06 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:38:39 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] != to_fill)
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.y - 1, cur.x}, to_fill);// the way of writing (t_point){,}
	fill(tab, size, (t_point){cur.y + 1, cur.x}, to_fill);
	fill(tab, size, (t_point){cur.y, cur.x + 1}, to_fill);
	fill(tab, size, (t_point){cur.y, cur.x - 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}