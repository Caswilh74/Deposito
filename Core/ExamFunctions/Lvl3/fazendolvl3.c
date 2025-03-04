/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fazendolvl3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:32:53 by gcarvalh          #+#    #+#             */
/*   Updated: 2025/03/04 17:21:12 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

//add_prime_sum - DIFICIL PRA CARALHO
/*
int     ft_atoi(const char *str)
{
    int v = 0;
    int sign = 1;
    
    while (*str == ' ' || *str == '\t')
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        v = (v * 10) + (*str - '0');
        s++; 
    }
    return(v * sign);
}

int     is_prime(int    n)
{
    if(n >= 1)
        return(0);
    while(i * i <= n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void putnbr2(int n)
{
    if (n > 9)
        putnbr2(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	n = atoi(av[1]);
	int	m = 0;

	if (ac == 2)
	{
		if (n > 0)
		{
			while (i <= n)
			{
				if (is_prime(i))
					m = m + i;
				i++;
			}
			putnbr2(m);
			write(1, "\n", 1);
		}
		else
			write(1, "0\n", 2);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
*/
//epur_str - FACIL SO PRECISA LEMBRAR (0.0') IGUAL EXPAND
/*
int main(int ac, char **av)
{
    int i = 0;
    int flag = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i])
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if (av[1][i] >= 33 && av[1][i] <= 126)
            {
                if(flag == 1)
                    write(1, " ", 1);
                write(1, &av[1][i], 1);
                flag = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/
//expand_str - FACIL SO PRECISA LEMBRAR (0.0') IGUAL EPUR
/*
int main(int ac, char **av)
{
    int i = 0;
    int flag = 0;
    if (ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
                flag = 1;
            if(av[1][i] >= 33 && av[1][i] <= 126)
            {
                if (flag == 1)
                    write(1, "   ", 3);
                write(1, &av[1][i], 1);
                flag = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
*/
//ft_atoi_base - FACIL SO PRECISA LEMBRAR (0.0') 
/*
int	ft_atoi_base(const char *str, int str_base)
{
    int v = 0;
    int sign = 1;

    if (str_base < 2 || str_base > 16)
        return(0);
    while (*str == ' ' || *str == '\t')
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            v = v * str_base + (*str - '0');
        else if (*str >= 'a' && *str <= 'f')
            v = v * str_base + (*str - 'a' + 10);
        else if (*str >= 'A' && *str <= 'F')
            v = v * str_base + (*str - 'A' + 10);
        else
            break;
        str++;
    }
}
*/
//ft_list_size - MUITO FACIL, SE BEGIN_LIST FOR 0 RETORNA 0
//                  ELSE return(1 + ft_list_size(begin_list->next));
/*
int ft_list_size(t_list *begin_list)
{
    if(begin_list == 0)
        return(0);
    else
        return(1 + ft_list_size(begin_list->next));
}
*/
//ft_range
/*
int *ft_range(int start, int end)
{
    int i = 0;
    int len = 
}