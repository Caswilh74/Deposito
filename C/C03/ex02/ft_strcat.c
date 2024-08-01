/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:06:56 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/08/01 12:47:21 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	count;

	count = 0;
	while (dest[count])
	{
		count++;
	}
	i = 0;
	while (src[i])
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "Gustavo ";
	char	src[] = "Castilho!";
	printf("dest: %s\n", src);
	printf("src: %s\n", dest);
	printf("strcat: %s\n", ft_strcat(dest, src));
	return (0);
}
