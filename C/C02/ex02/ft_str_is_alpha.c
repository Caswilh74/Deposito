/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:56:47 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/08/01 09:25:50 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122) && (str[i] < 65 || str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char string[] = "AaZz";
	printf("%d\n", ft_str_is_alpha(string));
	return (0);
}
