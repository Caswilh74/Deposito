/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:20:45 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/18 16:23:11 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_strlen(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != 0)
	{
		pos++;
	}
	return (pos);
}
/*
int	main(void)
{
	int		count;
	char	*str;

	count = 0;
	str = "Hello World!";
	count = ft_strlen(str);
	ft_putchar(48 + count / 10);
	ft_putchar(48 + count % 10);
	return (0);
}
*/