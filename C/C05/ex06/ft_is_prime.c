/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:13:50 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/07/30 11:19:58 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int	nb)
{
    int i;

	i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / i)
    {    
		if (nb % i == 0)
        	return (0);
    i++;
	}
	return (1);
}

int main(void)
{
    printf("%i\n", ft_is_prime(157));   
    printf("%i\n", ft_is_prime(49)); 
    return 0;
}