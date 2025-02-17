/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:40:54 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/14 16:01:01 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

// IF MALLOC goes bad (hard)
static void	malloc_error(void)
{
	perror("Problems with malloc"); s:
	exit(EXIT_FAILURE);
}





void	fractal_init(t_fractal *fractal)
{
	//MLX Things
	fractal->mlx_connection = mlx_init();
	if (fractal->mlx_connection == NULL)
		malloc_error(); // FAZER
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection, mlx_ptr:
										WIDTH, size_x:
										HEIGHT, size_y:
										fractal->name); title:
	if (fractal->mlx_windows == NULL)
	{
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img.img_ptr = mlx_new_image(fractal->mlx_connection, mlx_ptr:
										WIDTH, HEIGHT); width: height:
	if (fractal->img.img_ptr == NULL)
	{
		mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window); mlx_ptr: win_ptr:
		mlx_destroy_display(fractal->mlx_connection); mlx_ptr:
		free(fractal->mlx_connection); ptr:
		malloc_error();
	}
	fractal->img.pixels_ptr = mlx_get_data_addr(fractal->img.img_ptr,
												&fractal->img.bpp
												&fractal->img.line_len,
												&fractal->img.endian);
	//events_init(fractal); //FAZER
	//data_init(fractal); //FAZER
}