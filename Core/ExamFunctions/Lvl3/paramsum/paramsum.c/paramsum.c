/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:22:17 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/03/12 21:22:24 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_putnbr(int   n)
{
    char    resposta;
    
    if (n >= 10)
        ft_putnbr(n / 10);
    resposta = (n % 10) + '0';
    write(1, &resposta, 1);
}

int main(int ac, char **av)
{
    (void)av;

    ft_putnbr(ac - 1);
    write(1, "\n", 1);
    
    return (0);
}
