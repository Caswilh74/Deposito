/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fazendolvl2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:37:27 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/03/03 19:31:12 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//alpha_mirror
/*
int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while (av[1][i]) 
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = ('a' + 'z') - av[1][i];
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = ('A' + 'Z') - av[1][i];
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
*/
//camel_to_snake
/*
int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {    
                av[1][i] = av[1][i] + 32;
                write(1, "_", 1);
            }
            write(1, &av[1][i], 1);
            i++;     
        }
    }
    write(1, "\n", 1);
}
*/
//do_op
/*
int main(int ac, char **av)
{
    if (ac == 4)
    {
        if(av[2][0] == '+')
            printf("%d", (atoi(av[1]) + atoi(av[3])));
        if(av[2][0] == '-')
            printf("%d", (atoi(av[1]) - atoi(av[3])));
        if(av[2][0] == '*')
            printf("%d", (atoi(av[1]) * atoi(av[3])));
        if(av[2][0] == '/')
            printf("%d", (atoi(av[1]) / atoi(av[3])));
        if(av[2][0] == '%')
            printf("%d", (atoi(av[1]) % atoi(av[3])));
    }
    printf("\n");
    return(0);
}
*/
//atoi
/*
int ft_atoi(const char *str)
{
    int valor = 0;
    int sign = 1;
    while(*str == ' ' || *str == '\t')
        str++;
    if(*str == '-')
        sign = -1;
    if(*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        valor = (valor * 10) + (*str - '0');
        str++;
    }
    return(valor * sign);
}
*/
//strcmp
/*
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}
*/
//strcspn
/*
size_t ft_strcspn(const char *s, const char *reject)
{
    size_t count = 0;
    size_t i = 0;

    while(*s)
    {
        while(reject[i] && *s != reject[i])
            i++;
        if(reject[i] != '\0')
            return(count);
        i = 0;
        count++;
        s++;
    }
    return(count);
}
*/
//strdup
/*
char    *ft_strdup(char *src)
{
    int i = 0;
    int j = 0;
    char *strcpy;

    while(src[i])
        i++;
    strcpy = malloc(sizeof(*strcpy) * (i + 1));
    if(strcpy != NULL)
    {
        while(src[j])
        {
            strcpy[j] = src[j];
            j++;
        }
        strcpy[j] = '\0';
    }
    return(strcpy);
}
*/
//inter INCOMPLETO
/*
int main(int ac. char **av)
{
    if(ac == 3)
    {
        
    }
    write(1, "\n", 1);
}
*/
//is_power_of_2
/*
int is_power_of_2(unsigned int n)
{
    if(n == 0)
        return(0);
    return(n &(n - 1)) == 0;
}
*/
//last_word
/*
int main(int ac, char **av)
{
    int i = 0;
    int start = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while(i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        start = i;
        while (start >= 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
            start--;
        start++;
        while (start <= i)
        {   
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
*/
//max
/*
int max(int* tab, unsigned int len)
{
    int max = tab[0];
    unsigned int i = 0;
    while(i > len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);
}
*/
//print_bits
/*
void    print_bits(unsigned char octet)
{
    int i =8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}
*/
//reverse_bits
/*
unsigned char   reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;
    while(i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return(res);
}
*/
//snake_to_camel
/*
int main(int ac, char **av)
{
    int i = 0;
    
    if(ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if(av[1][i] == '_')
            {
                i++;
                av[1][i] = av[1][i] - 32;
            }
            write(1, &av[1][i], 1);
            i++;    
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/
//str_rev
/*
char    *ft_strrev(char *str)
{
    int j = -1;
    int i = 0;
    char    temp;
    
    while(str[i])
        i++;
    while(++j < i / 2)
    {
        temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 -j] = temp;
    }
    return(str);
}
*/
//swap_bits
/*
unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}
*/