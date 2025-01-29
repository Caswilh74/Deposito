/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:47:43 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/29 14:57:15 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if(argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if(argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if(argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if(argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));				
	}
	printf("\n");
	return(0);
}