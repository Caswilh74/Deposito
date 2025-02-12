/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:37:52 by marvin            #+#    #+#             */
/*   Updated: 2025/02/12 20:37:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_ITER 1000
#define WIDTH 80
#define HEIGHT 40

void mandelbrot() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            double cr = (x - WIDTH / 2.0) * 4.0 / WIDTH;
            double ci = (y - HEIGHT / 2.0) * 2.0 / HEIGHT;
            double zr = 0.0, zi = 0.0;
            int iter = 0;

            while (zr * zr + zi * zi < 4.0 && iter < MAX_ITER) {
                double temp = zr * zr - zi * zi + cr;
                zi = 2.0 * zr * zi + ci;
                zr = temp;
                iter++;
            }

            if (iter == MAX_ITER)
                printf("#");  // Dentro do Mandelbrot
            else
                printf(" ");  // Fora do Mandelbrot
        }
        printf("\n");
    }
}

int main() {
    mandelbrot();
    return 0;
}
