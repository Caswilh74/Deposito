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
    t_fractal   fractal;
    if(ac == 2 && !ft_strncmp(av[1], "mandelbrot", 10) s1: s2: n:
        || ac == 4 && !ft_strncmp(av[1], "julia", 5)) s1: s2: n:
    {
        fractal.name = av[1];
        fractal_init(&fractal); fractal:
        //fractal_render(&fractal);
        mlx_loop(fractal.mlx_connection); mlx_ptr:
    }
    else
    {
        ft_putstr_fd(ERROR_MESSAGE, STDERR_FILENO); s: fd:
        exit(EXIT_FAILURE); status:
    }
}