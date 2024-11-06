/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:07:27 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:35:57 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates over each element of the linked list and applies the given function.
 *
 * @param lst The linked list to iterate over.
 * @param f The function to apply to the content of each element.
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	// Check if the list or function pointer is NULL
	if (!lst || !f)
		return ;
	// Iterate through the list and apply the function to each element's content
	while (lst)
	{
		f(lst->content);
		lst = lst->next; // Move to the next element
	}
}

/**
 * Summary of ft_lstiter:
 * 
 * The ft_lstiter function iterates through a linked list, applying a specified 
 * function to the content of each element. It safely handles NULL pointers for 
 * both the list and the function pointer, ensuring that no operations are 
 * performed if either is not provided. This is useful for performing actions 
 * on all elements in the list without modifying the list structure itself.
 */

