/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:23:10 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 10:43:45 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * @param s Pointer to the memory area to be cleared.
 * @param n Number of bytes to set to zero.
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*t; // Pointer to iterate over the memory area

	t = (unsigned char *) s; // Cast the input pointer to an unsigned char pointer
	while (n > 0) // Loop until n bytes have been set to zero
	{
		*(t++) = 0; // Set the current byte to zero and move to the next byte
		n--; // Decrease the count of bytes remaining
 	}
}

/*The ft_bzero function sets the first n bytes of a specified 
memory area to zero.
It is typically used to clear memory,
ensuring that the specified portion is free of
any residual data.*/
