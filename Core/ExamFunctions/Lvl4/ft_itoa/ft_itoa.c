/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:36:14 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:36:16 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char	*s;
	int	i = 0;
	int	len = 0;
	long	ln;
	long	m;

	m = nbr;
	ln = nbr;
	if (nbr == 0)
	{
		len = 1;
		s = malloc(sizeof(char) * 2);
		if (!s)
			return (NULL);
		s[0] = '0';
		s[1] = '\0';	
	}
	else if (nbr < 0)
	{
		ln = -ln;
		len++;
		while (ln != 0)
		{
			ln = ln / 10;
			len++;
		}
		s = malloc(sizeof(char) * (len + 1));
		if (!s)
			return (NULL);
		s[0] = '-';	
		s[len] = '\0';
		m = -m;
		i = len - 1;
		while (i > 0)
		{
			s[i] = m % 10 + '0';
			m = m / 10;
			i--;
		}
	}
	else
	{
		while (nbr != 0)
		{
			nbr = nbr / 10;
			len++;
		}
		s = malloc(sizeof(char) * (len + 1));
		if (!s)
			return (NULL);
		s[len] = '\0';
		i = len - 1;
		while (i >= 0)
		{
			s[i] = m % 10 + '0';
			m = m / 10;
			i--;
		}
	}
	return (s);
}