/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:37:47 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/24 16:37:49 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*start;
	int	swap;

	if (!lst || !lst->next)
		return;
	start = lst;
	while (lst && lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)//difference between (*cmp) and cmp
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;//restart from the begging if there is a swap
		}
		else
			lst = lst->next;
	}
	return (start);
}