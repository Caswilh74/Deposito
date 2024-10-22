/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:22:55 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/22 14:54:41 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length = 0; // Counts the Length of source
	unsigned int	c = 0; // Character being copied at the moment

	while (src[length] != 0) // regular loop
		length++;
	if (size != 0) // check how many characters need to copy
	{
		while (src[c] != 0 && c < (size - 1))
		{
			dest[c] = src[c]; 
			c++;
		}
		dest[c] = 0; // Need to end the string with NULL
	}
	return (length); // return the total Length of src string
}