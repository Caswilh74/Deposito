/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:54:53 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/17 18:14:43 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	if (n < 0)
	{
		write(1, "N", 1);	
	}
	else 
	{
		write(1, "P", 1);
	}
}

int	main(void)
{
	ft_is_negative(-74);	
	return(0);
}