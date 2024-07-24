/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:57:41 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/24 14:14:20 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (to_find[f] == 0)
		return(str);
	while (str[i])
	{
		while (str[i + f] == to_find[f] && str[i + f])
			f++;
		if (to_find[f] == 0)
			return(str + i);
		i++;
		f = 0;
	}
	return(0);
}
/*
int	main(void)
{
	char	src[] = "42 Ecole";	
	char	to_find[] = "Ecole";
	printf("%s\n", ft_strstr(src, to_find));
	return (0);
}
*/