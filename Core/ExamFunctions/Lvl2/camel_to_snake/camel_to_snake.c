/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:07:24 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/29 14:37:28 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = argv[1][i] + 32;
				write(1, "_", 1);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}