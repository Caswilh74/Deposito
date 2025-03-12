/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:42:45 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/03/12 21:42:51 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int start;
    int end;
    int flag;
    
    if (ac == 2)
    {
        while(av[1][i])
            i++;
        while(i >= 0)
        {
            while(i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\0'))
                i--;
            end = i;
            
            while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            start = i + 1;
            
            flag = start;
            while(flag <= end)
            {
                write(1, &av[1][flag], 1);
                flag++;
            }

            if (i >= 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
