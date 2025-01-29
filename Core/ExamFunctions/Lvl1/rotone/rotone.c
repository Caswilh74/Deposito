/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:34:13 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/29 10:39:43 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if ( *s == 'z' || *s == 'Z')
			ft_putchar(*s -25);
		else
			ft_putchar(*s);
		s++;
	}	
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}