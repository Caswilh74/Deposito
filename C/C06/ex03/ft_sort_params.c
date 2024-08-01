/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_sort_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:17:32 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/31 16:22:47 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_params(char **tab, int size)
{
	char	*temp;
	int		i;
	int		s;

	i = 1;
	while (i < size)
	{
		s = i + 1;
		while (s < size)
		{
			if (ft_strcmp(tab[s], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[s];
				tab[s] = temp;
			}
			s++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

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

	ft_sort_params(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
