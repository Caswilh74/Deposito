/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:14:59 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:39:43 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function to each element of the linked list and creates a new list
 * with the results. If any allocation fails, it cleans up and returns NULL.
 *
 * @param lst The linked list to iterate over.
 * @param f The function to apply to each element's content.
 * @param del A function to delete the content of elements in case of failure.
 * @return A new linked list containing the results of applying f to each element,
 *         or NULL if the input list is NULL or if memory allocation fails.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*content;

	// Check if the list, function f, or delete function del is NULL
	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content); // Apply the function to the content
		if (!content)
		{
			ft_lstclear(&newlst, del); // Clean up if content is NULL
			return (NULL);
		}
		newnode = ft_lstnew(content); // Create a new node with the transformed content
		if (!newnode)
		{
			ft_lstclear(&newlst, del); // Clean up if node creation fails
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode); // Add the new node to the new list
		lst = lst->next; // Move to the next element in the original list
	}
	return (newlst); // Return the new list
}
/**
 * Summary of ft_lstmap:
 * 
 * The ft_lstmap function iterates through a linked list, applying a specified 
 * function to the content of each element to create a new list with the results. 
 * It handles memory allocation and cleans up in case of failures. The function 
 * takes pointers to the original list, the transformation function, and a 
 * deletion function to manage memory for elements if needed. It returns a new 
 * linked list or NULL if any errors occur during the process.
 */

