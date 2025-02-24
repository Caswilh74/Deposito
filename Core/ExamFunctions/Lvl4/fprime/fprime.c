/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:35:36 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:35:38 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 2;
	int	n = 0;

	if (ac == 2)
	{
		n = atoi(av[1])
		if (n == 1)
			printf("1");
		while (i <= n)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (i == n)//to decide where to stop printing *
					break;
				printf("*");
				n = n / i;
				i = 2;
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}