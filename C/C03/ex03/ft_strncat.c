/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:44:40 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/24 11:20:19 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	while (dest[count])
	{
		count++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = 0;
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "ab";
	char	src[] = "cedfgh";

	printf("dest: %s\n", src);
	printf("src: %s\n", dest);
	printf("strncat: %s\n", ft_strncat(dest, src, 5));
	return (0);
}
*/