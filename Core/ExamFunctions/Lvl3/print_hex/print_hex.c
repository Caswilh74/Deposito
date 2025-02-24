/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:36:51 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 15:36:53 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *s)
void	print_hex(int n)
{
	char	base[16] = "0123456789abcdef";
	char	c;
	
	if (n >= 16)
		print_hex(n / 16)
	c = base[n % 16];
	write(1, &c, 1);
}


int	main(int ac, char **av)
{
	int	i = 0;
	int	n = 0;


	if (ac == 2)
	{
		n = atoi(av[1][i]);
		if (n >= 0)
			print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}