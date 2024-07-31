/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issousa <issousa@student.42luxembourg.l    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:11:53 by issousa           #+#    #+#             */
/*   Updated: 2024/07/28 15:09:00 by issousa          ###   ########.fr       */
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
