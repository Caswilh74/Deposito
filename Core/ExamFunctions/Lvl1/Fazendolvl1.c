/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fazendolvl1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:26:53 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/03/04 16:53:10 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//first word - FACIL
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

//fizzbuzz - FACIL
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

//ft_swap - MUITO FACIL
/*
void ft_swap(int   *a,int   *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}
*/

//repeat_alpha - FACIL MAS PRECISA LEMBRAR
/*
int    get_index(char c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 'a' + 1);
    else if (c >= 'A' && c <= 'Z')
        return(c - 'A' + 1);
    return(0);
}

void    repeat_alpha(char *s)
{
    int count = 0;
    while (*s)
    {
        if ((*s >= 'a' && *s<= 'z') || (*s >= 'A' && *s <= 'Z'))
        {
            count = get_index(*s);
            while(i--)
                write(1, &*s, 1);
        }
        else
            write(1, &*s, 1);
        s++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
}
*/
//rev_print - MUITO FACIL
/*
int main(int ac, char **av)
{
    int i = 0;
    while (av[1][i])
        i++;
    i--;
    while (av[1][i])
    {
        write(1, &av[1][i], 1);
        i--;
    }
    write(1, "/n", 1);
}
*/
//search_and_replace - PRECISA REVER PRA LEMBRAR MAS FACIL
/*
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 4)
    {
        if ((av[2][0] >= 'a' && av[2][0] <= 'z') || (av[2][0] >= 'A' && av[2][0] <= 'Z') && av[2][1] == '\0')
            if ((av[3][0] >= 'a' && av[3][0] <= 'z') || (av[3][0] >= 'A' && av[3][0] <= 'Z') && av[3][1] == '\0')
            {
                while (av[1][i])
                {
                    if (av[1][i] == av[2][0])
                    {
                        av[1][i] = av[3][0];
                    }
                    write(1, &av[1][i], 1);
                    i++;
                }
            }
    }
    write(1, "\n", 1);
}
*/
//strcpy - MUITO FACIL
/*
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}
*/
//strlen - MUITO FACIL 
/*
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}
*/
//ulstr - MAIS FACIL DE TODOS
/*
int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] -= 32;
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] += 32;
            write(1, &av[1][i], 1);
            i++;
        }
    write(1, "\n", 1);
}
*/