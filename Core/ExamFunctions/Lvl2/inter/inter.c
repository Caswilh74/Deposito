/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:30:49 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 15:31:05 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	unsigned char	seen[256] = {0};

	if (ac == 3)
	{
		while (av[1][j])
		{
			j = 0;
			while (av[2][i])
			{
				if (av[2][i] == av[1][j] && av[1][j] >= 33 && av[1][j] <= 126)
				{
					if (seen[(unsigned char)av[1][j]] == 0)
					{
						write(1, &av[1][j], 1);
						seen[(unsigned char)av[1][j]] = 1;
					}
					break;
				}
				i++;
				
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
