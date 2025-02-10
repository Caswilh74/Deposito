/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:26:49 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/10 17:50:55 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline.
Example:
$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
#include <unistd.h>*/

int main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if ((av[1][i] >= 'a' && av[1][i]<= 'm') || (av[1][i] >= 'A' && av[1][i]<= 'M'))
				av[1][i] = av[1][i] + 13;
			else if ((av[1][i] >= 'n' && av[1][i]<= 'z') || (av[1][i] >= 'N' && av[1][i]<= 'Z'))
				av[1][i] = av[1][i] - 13;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);	
}