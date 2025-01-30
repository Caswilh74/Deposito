/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_rev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:48:50 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/01/30 10:05:50 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int	j = -1;
	int	i = 0;
	char	temporary;

	while(str[i])
		i++;
	while(++j < i / 2)
	{
		temporary = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = temporary;
	}
	return(str);
}