/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:39:42 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:25:46 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds a new element at the end of the linked list.
 *
 * @param lst A pointer to the pointer of the first element of the list.
 * @param new The new element to add to the list.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*currentlist;
	// Check if the list or the new element is NULL
	if (!lst || !new)
		return ;
	// If the list is empty, set the new element as the first element	
	if (!*lst)
		*lst = new;
	else
	{
		currentlist = *lst;
		// Traverse to the last element of the list
		while (currentlist->next)
			currentlist = currentlist->next;
		// Link the new element at the end
		currentlist->next = new;
	}
}
/**
 * Summary of ft_lstadd_back:
 * 
 * The ft_lstadd_back function adds a new element to the end of a linked list.
 * It checks if the list is empty and, if so, sets the new element as the first
 * element. If the list is not empty, it traverses to the last element and 
 * links the new element there. This function handles NULL pointers for both 
 * the list and the new element, ensuring safe operations.
 */

