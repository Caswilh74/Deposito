/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 21:25:12 by marvin            #+#    #+#             */
/*   Updated: 2025/02/13 18:21:50 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "minilibx-linux/mlx.h"


#define ERROR_MESSAGE "./fractol <mandelbrot> or ./fractol <julia> <v1> <v2>\n"


typedef struct s_img
{
	void	*img_ptr; // pointer to image struct
	char	*pixels_ptr; // points to the actual pixel
	int		bpp;
	int		endian;
	int		line_len;
}				t_img;

typedef struct s_fractal
{
	char	*name; // title
	void	*mlx_connection; // mlx_init()
	void	*mlx_window; // mlx_new_window()
	t_img	img; // Image
	
	//hooks member variables // FAZER
	
}				t_fractal;




//Strings Utils
int	ft_strncmp(char *s1, char *s2, int n);
void	ft_putstr_fd(char *s, int fd);

// Init
void	fractal_init(t_fractal *fractal);

#endif
