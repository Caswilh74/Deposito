/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:37:16 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:37:18 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char **av)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;

	if (ac >= 2)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		start = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		end = i - 1;
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		if (av[1][i])
		{
			while (av[1][i])
			{
				if (av[1][i] == ' ' || av[1][i] == '\t')
				{
					while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
						i++;
					if (av[1][i])
						write(1, " ", 1);//////////space
				}
				else
				{
					write(1, &av[1][i], 1);
					i++;
				}
			}
			write(1, " ", 1);/////////space
		}
		while (end >= start)
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}