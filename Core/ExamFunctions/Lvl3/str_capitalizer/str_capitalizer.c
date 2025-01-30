/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:48:31 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/30 15:48:54 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i = 0;
	
	if(str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while(str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while(i < argc)
		{
				str_capitalizer(argv[i]);
				write(1, "\n", 1);
				i += 1;
		}
	}
	return (0);
}