/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:56:43 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:32:49 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Clears the entire linked list and frees the memory of each element.
 *
 * @param lst A pointer to the pointer of the first element of the list.
 * @param del A function pointer used to delete the content of each element.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;
	// Check if the list or delete function is NULL
	if (!lst || !del)
		return ;
	current = *lst;
	// Traverse the list and delete each element
	while (current)
	{
		next = current->next; // Store the next element
		ft_lstdelone(current, del); // Delete the current element
		current = next; // Move to the next element
	}
	*lst = NULL; // Set the list pointer to NULL
}

/**
 * Summary of ft_lstclear:
 * 
 * The ft_lstclear function iterates through a linked list, deleting each 
 * element and freeing its memory using the provided delete function. It 
 * safely handles NULL pointers for both the list and the delete function. 
 * After clearing the list, it sets the list pointer to NULL, indicating 
 * that the list is now empty.
 */
