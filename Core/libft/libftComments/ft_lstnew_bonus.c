/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:30:20 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:42:22 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new element for a linked list.
 *
 * @param content The content to store in the new list element.
 * @return A pointer to the newly created list element, or NULL if memory allocation fails.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (t_list *) malloc (sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist->content = content; // Assign the content to the new element
	newlist->next = NULL; // Initialize the next pointer to NULL
	return (newlist); // Return the newly created list element
}
 /**
 * Summary of ft_lstnew:
 * 
 * The ft_lstnew function allocates memory for a new linked list element, 
 * initializes its content with the provided value, and sets its next pointer 
 * to NULL. It returns a pointer to the newly created element or NULL if 
 * memory allocation fails. This function is essential for creating new nodes 
 * in a linked list.
 */
