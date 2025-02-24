/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:34:37 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:34:38 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 1;

	if (ac > 1)
	{
		while (av[j][i])
		{
			i = 0;
			while (av[j][i])
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
					av[j][i] = av[j][i] + 32;
				if ((av[j][i] >= 'a' && av[j][i] <= 'z')
					&& (av[j][i + 1] == ' ' || av[j][i + 1] == '\t'))
					av[j][i] = av[j][i] - 32;
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	if (ac == 1)
		write(1, "\n", 1);
	return (0);
}