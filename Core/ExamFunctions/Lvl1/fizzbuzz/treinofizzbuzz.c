/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treinofizzbuzz.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:24:08 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/11 14:31:03 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_number(int	n)
{
	char	str[10] = "0123456789";
	if (n > 9)
		write_number(n / 10);
	write(1, &str[n % 10], 1);	
}

int	main()
{
	int	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_number(i);
		i++;
		write(1, "\n", 1);
	}
}