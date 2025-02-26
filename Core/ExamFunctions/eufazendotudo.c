/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eufazendotudo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:26:53 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/02/26 19:26:53 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//first word
/*
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
       while ((av[1][i] == 32 || av[1][i] == '\t') && av[1][i])
            i++;
        while(av[1][i] && av[1][i] != 32 && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);
                i++;
            }
    }
    write(1, "\n", 1);        
}
*/

//fizzbuzz
/*
void write_number(int    number)
{
    char    str[10] = "0123456789";

    if (number > 9)
        write_number(number / 10);
    write(1, &str[number % 10], 1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else
            write_number(i);
        write(1, "\n", 1);
        i++;
    }
}
*/

//ft_swap
/*
void ft_swap(int   *a,int   *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}
*/

//repeat_alpha

int main(int ac, char **av)
{
    if (av[1][i] >= 'a' && av[1][i] <= 'z')
        av[1][i] = (av[1][i] - 'a' + 1);
    else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        av[1][i] = (av[1][i] - 'A' + 1);
    write(1)
}