/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:30:10 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/03/04 15:40:33 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *s)
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

int	is_prime(int n)
{
	int	i = 2;

	if (n <= 1)
		return (0);
	
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr2(int n)
{
	char	c;

	if (n > 9)
		putnbr2(n / 10)
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	n = atoi(av[1]);
	int	m = 0;

	if (ac == 2)
	{
		if (n > 0)
		{
			while (i <= n)
			{
				if (is_prime(i))
					m = m + i;
				i++;
			}
			putnbr2(m);
			write(1, "\n", 1);
		}
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "0\n", 2);
	return (0);
}