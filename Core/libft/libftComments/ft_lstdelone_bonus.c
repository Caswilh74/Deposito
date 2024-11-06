/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:50:36 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:34:21 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes a single element from the linked list and frees its memory.
 *
 * @param lst The element to delete.
 * @param del A function pointer used to delete the content of the element.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	 // Check if the list element or delete function is NULL
	if (!lst || !del)
		return ;
		// Call the delete function on the content of the element
	del (lst->content);
	// Free the memory allocated for the list element itself
	free (lst);
}

/**
 * Summary of ft_lstdelone:
 * 
 * The ft_lstdelone function deletes a single element from a linked list. 
 * It uses the provided delete function to free the memory of the element's 
 * content before freeing the memory allocated for the list element itself. 
 * The function safely handles NULL pointers for both the list element and 
 * the delete function.
 */

