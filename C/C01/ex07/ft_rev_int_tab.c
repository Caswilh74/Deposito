/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:29:34 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/26 11:25:33 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = swap;
		i ++;
	}
}
/*
int	main(void)
{
	int	size;
	int	count;
	int inicio[6] = {0,1,2,3,4,5};	
	
	size = 6;	
	ft_rev_int_tab(inicio, size);
	count = 0;
	while (count < size)
	{
		ft_putchar(48 + inicio[count]);
		count++;
	}
	return (0);
}
*/