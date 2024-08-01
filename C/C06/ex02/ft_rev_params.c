/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:16:51 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/31 16:22:50 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	n = 1;
	i = argc - n;
	if (argc > 1)
	{
		while (n < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i--;
			n++;
		}
	}
}
