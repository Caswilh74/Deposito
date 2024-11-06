/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:26:51 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 09:43:55 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of elements in the linked list.
 *
 * @param lst The linked list to count elements in.
 * @return The number of elements in the list.
 */

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	// Iterate through the list and count the elements
	while (lst)
	{
		counter++;
		lst = lst-> next; // Move to the next element
	}
	return (counter); // Return the total count
}
/**
 * Summary of ft_lstsize:
 * 
 * The ft_lstsize function iterates through a linked list to count and 
 * return the number of elements it contains. It traverses the list until 
 * it reaches the end, incrementing a counter for each element. This 
 * function is useful for determining the size of the list for various 
 * operations.
 */
