/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:36:06 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:37:19 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns the last element of the linked list.
 *
 * @param lst The linked list to traverse.
 * @return The last element of the list, or NULL if the list is empty.
 */

t_list	*ft_lstlast(t_list *lst)
{
	// Check if the list is NULL
	if (!lst)
		return (NULL);
	// Traverse the list to find the last element
	while (lst->next)
		lst = lst->next;
	return (lst); // Return the last element
}
/**
 * Summary of ft_lstlast:
 * 
 * The ft_lstlast function traverses a linked list and returns the last 
 * element. If the list is empty (NULL), it returns NULL. This function is 
 * useful for determining the end of the list, which can be helpful in 
 * various list operations, such as adding new elements to the end of the list.
 */
