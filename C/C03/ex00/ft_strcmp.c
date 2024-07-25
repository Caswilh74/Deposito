/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 07:06:09 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/24 16:36:52 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "gustavo";
	s2 = "Gustavo";
	#include <stdio.h>
	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("stringcmp: %d", ft_strcmp(s1, s2));
	printf("\n");
}
*/