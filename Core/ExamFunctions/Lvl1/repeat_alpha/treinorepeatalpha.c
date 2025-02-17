/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treinorepeatalpha.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:32:53 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/11 14:43:28 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int get_index(char c)
{
	if (c >= 'a' && c <= 'z')
		return(c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return(c - 'A' + 1);	
}

void	repeat_alpha(char *s)
{
	int	i = 0;
	while(*s)
	{
		if((*s >= 'a' && *s <= 'z') || (*s >= 'a' && *s <= 'z'))
		{
			i = get_index(*s);
			while(i--)
				write(1, &*s, 1);
		}
		else
			write(1, &*s, 1);
		s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1])
	write(1, "\n", 1);
}