/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:15:50 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/03 14:18:26 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	count_words(char *s)
{
	int count = 0;
	while (*s)
	{
		if (!is_space(*s))
		{
			count++;
			while (*s && !is_space(*s))
				s++;
		}
		else
			s++;
	}
	return (count);
}

int	epur_str(char *s)
{
	int end = count_words(s);
	int i = 0;
	while (*s)
	{
		if (!is_space(*s))
		{
			i++;
			while (*s && !is_space(*s))
			{
				write(1, &*s, 1);
				s++;
			}
			if (i != end)
				write(1, " ", 1);
		}
		else
			s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	write(1, "\n", 1);
}