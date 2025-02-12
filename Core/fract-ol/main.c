/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:16:30 by gcarvalh           #+#    #+#             */
/*   Updated: 2025/02/12 21:16:30 by gcarvalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(int ac, char **av)
{
    if(ac == 2 && ft_strncmp(av[1], "mandelbrot", 10)//FAZER
        || ac == 4 && ft_strncmp(av[1], "julia", 5))
    {

    }
    else
        ft_putstr_fd.c(ERROR_MESSAGE, STDERR_FILENO); //FAZER
        exit(EXIT_FAILURE);
}