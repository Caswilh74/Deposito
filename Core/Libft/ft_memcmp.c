/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:01:12 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/24 15:37:10 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char*	ptr_s1;
	unsigned char*	ptr_s2;
	size_t	i;

	if (n == 0)
		return (0);
	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
		{
			return (ptr_s1[i] - ptr_s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hella";
    char str4[] = "Hello!";
    
    // Test case 1: Identical memory blocks
    printf("Test 1 (Identical): %d\n", ft_memcmp(str1, str2, 5)); // Expect 0
    
    // Test case 2: Different memory blocks
    printf("Test 2 (Different): %d\n", ft_memcmp(str1, str3, 5)); // Expect positive value ('o' > 'a')
    
    // Test case 3: Different memory with length 6
    printf("Test 3 (Different length): %d\n", ft_memcmp(str1, str4, 6)); // Expect negative value (str1 is shorter)
    
    // Test case 4: Zero-length comparison
    printf("Test 4 (Zero-length): %d\n", ft_memcmp(str1, str3, 0)); // Expect 0 (nothing compared)
    
    return 0;
}
*/