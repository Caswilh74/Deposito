/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 08:56:37 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/23 14:03:55 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	if (n == 0)
	{
		return(0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char  *s1;
	char  *s2;
	
	s1 = "gustavo";
	s2 = "Gustavo";
	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("stringcmp: %d\n", ft_strncmp(s1, s2, 7));
	return(0);
}
*/