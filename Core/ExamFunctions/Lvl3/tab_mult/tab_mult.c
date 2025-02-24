/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:35:10 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:35:11 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *s)
{
	int	v = 0;
	int	sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s = '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		v = (v * 10) + (*s - '0');
		s++;
	}
	return (v * sign);
}

void	putnbr(int n)
{
	char	c;

	if (n > 9)
		putnbr(n / 10);
	c = (n % 10) + '0'
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	n = 0;
	int	i = 1;

	if (ac == 2)
	{
		n = atoi(av[1]);
		while (i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(n);
			write(1, " = ", 3);
			putnbr(n * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	write(1, "\n", 1);
	return (0);
}