/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:40:48 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/10 17:48:38 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
#include <unistd.h>*/

int	get_index(char c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return(c - 'A' + 1);	
	return(0);
}

void	repeat_alpha(char *s)
{
	int	i = 0;
	while(*s)
	{
		if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			i = get_index(*s);
			while(i--)
				write(1, &*s, 1);
		}
		else
			write(1, &*s, 1);
		s++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n", 1);
}