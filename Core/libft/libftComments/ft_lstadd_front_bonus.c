/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:03:27 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/31 10:28:54 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds a new element at the beginning of the linked list.
 *
 * @param lst A pointer to the pointer of the first element of the list.
 * @param new The new element to add to the list.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new) // Check if new is NULL
		return ; // Early exit if  its NULL
	// Set the next pointer of the new element to the current first element
	new->next = *lst;
	 // Update the list to point to the new element
	*lst = new;
}

/**
 * Summary of ft_lstadd_front:
 * 
 * The ft_lstadd_front function adds a new element to the beginning of a 
 * linked list. It updates the new element's next pointer to point to the 
 * current first element and then updates the list to point to the new 
 * element.
 */
