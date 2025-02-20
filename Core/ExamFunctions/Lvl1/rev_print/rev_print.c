/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:17:49 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/11 15:23:50 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
char	*rev_print(char *str)
{
	int	i = 0;
	while(str[i])
		i++;
	while(--i >= 0)
		write(1, &str[i], 1);
	write(1, "\n", 1);
	return(str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	else
		write(1, "\n", 1);
	return(0);
}