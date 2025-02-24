/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:31:52 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:31:53 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int	v = 0;
	int	sign = 1;

	if (str_base < 2 || str_base > 16)
		return (0);
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			v = v * str_base + (*str - '0');
		else if (*str >= 'a' && *str <= 'f')
			v = v * str_base + (*str - 'a' + 10);
		else if (*str >= 'A' && *str <= 'F')
			v = v * str_base + (*str - 'A' + 10);
		else
			break;
		str++;
	}
	return (v * sign);
}