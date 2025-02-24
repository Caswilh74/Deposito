/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygeng <ygeng@student.42luxembourg.lu>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 07:22:43 by ygeng             #+#    #+#             */
/*   Updated: 2025/01/04 07:22:47 by ygeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Level 1
//First_word

#include <unistd.h>
int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		whille (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		whhile (av[1][i] && av[1][i] >= 33 && av[1][i] <= 126)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//fizzbuzz
#include <unistd.h>

void	putnbr1(int n)
{
	char	c;

	if (n > 9)
		pubnbr1(n / 10)
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			putnbr1(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}

//ft_putstr
#include <unistd.h>
void	ft_putstr(char *s)
{
	int	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (0);
}

//ft_strcpy
#include <unistd.h>
char	*ft_strcpy(char *des, char *src)
{
	int	i = 0;

	while (scr[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

//ft_strlen
#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

//swap
#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

//repeat_alpha
#include <unistd.h>
int	main(int ac, char **av)
{
	int	i = 0;
	int	n = 1;

	if (ac == 2)
	{
		while (av[1][i])
			{
				if (av[1][i] >= 'a' && av[1][i] <= 'z')
					n = av[1][i] - 'a' + 1;
				else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
					n = av[1][i] - 'A' + 1;
				else
					n = 1;
				while (n > 0)
				{
					write(1, &av[1][i], 1)
					n--;
				}
				i++;	
			}
	}
	write(1, "\n", 1);
	return (0);
}

//rev_print
#include <unistd.h>
char	*rev_print(char	*str)
{
	int	i = 0;

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);//******************
}

//rot_13
#include <unistd.h>
int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] >= 'z')
				av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';
			else if (av[1][i] >= 'A' && av[1][i] >= 'Z')
				av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//search_and_replace
#include <unistd.h>
int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//ulstr
#include <unistd.h>
int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = av[1][i] - 32;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = av[1][i] + 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

///////////////////
//Level---22222

//alpha_mirror
#include <unistd.h>
int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - (av[1][i] - 'a');
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - (av[1][i] - 'A');
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
// 23****
//camel_to_snake
#include <unistd.h>
int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] = av[1][i] + 32;
				write(1, "-", 1);
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//sname_to_camel
int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == '-')
			{
				i++;
				av[1][i] = av[1][i] - 32;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


//do_op
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int	i = 0;
	int	a = 0;
	int	b = 0;
	int	c = 0;//how about using long long to avoid overflow: long long int;, but here already set that the output is int

	if (ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if (av[2][0] == '+')
			c = a + b;
		else if (av[2][0] == '-')
			c = a - b;
		else if (av[2][0] == '*')
			c = a * b;
		else if (av[2][0] == '/' && b != 0)
			c = a / b;
		else if (av[2][0] == '%' && b != 0)
			c = a % b;
		printf("%d", c);// "%lld"
	}
	write(1, "\n", 1);
	return (0);
}

//atoi
#include <unistd.h>

int	atoi(char *s)
{
	int	v = 0;
	int	sign = 1;
	
	while (*s == ' ' || *s == '\t')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		v = (v * 10) + (*s - '0');
		s++;
	}
	return (v * sign);
}

//ft_strcmp
#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

//ft_strcspn
#include <unistd.h>
#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;
	size_t	count = 0;

	while (*s)
	{
		while (reject[i] && *s != reject[i])
			i++;
		if (reject[i] != '\0')//**
			return (count);
		count++;
		i = 0;
		s++;
	}
	return (count);
}

//ft_strdup
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int	i = 0;
	char	*des;

	while (src[i] != '\0')
		i++;
	des = malloc(sizeof(char) * (i + 1));
	if (!des)
		return (NULL);
	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

//ft_strpbrk
#include <unistd.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);//**
			j++;
		}
		i++;
	}
	return (NULL);
}

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
//ft_strrev
char	*ft_strrev(char *str)
{
	int	i = 0;
	int	j = 0;
	char	c;
	int	len;

	while (str[i])
		i++;
	len = i;
	while (j < len / 2)//**
	{
		c = str[j];
		str[j] = str[i - 1];
		str[i - 1] = c;
		j++;
		i--;
	}
	return (str);		
}

//strspn
#include <stddet.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	size_t	j = 0;
	size_t	count;

	while (s[i])
	{
		while (accept[j] && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')//**
			return (count);
		i++;
		count++;
		j = 0;
	}
	return (count);
}

//$$ 33  -  126***
// seen[(unsigned char)av[1][j]
//inter
#include <unistd.h>
int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	unsigned char	seen[256] = {0};

	if (ac == 3)
	{
		while (av[1][j])
		{
			j = 0;
			while (av[2][i])
			{
				if (av[2][i] == av[1][j] && av[1][j] >= 33 && av[1][j] <= 126)
				{
					if (seen[(unsigned char)av[1][j]] == 0)
					{
						write(1, &av[1][j], 1);
						seen[(unsigned char)av[1][j]] = 1;
					}
					break;
				}
				i++;
				
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//union
int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;
	unsigned char	seen[256] = {0};

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (seen[(unsigned char)av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				seen[(unsigned char)av[1][i]] = 1;///important seen[(unsigned char)av[1][i]]
			}
			i++;
		}
		while (av[2][j])
		{
			if (seen[(unsigned char)(av[2][j]] == 0)
			{
				write(1, &av[2][j], 1);
				seen[(unsigned char)av[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


//is_power_of_2
int	is_power_of_2(unsigned int n)
{
	if (n < 1)
		return (0);
	if (n == 1)
		return (1);
	while (n > 1)
	{
		if ( n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}
//another_easier_way
int is_power_of_2(unsigned int n)
{
	if (n == 0)//important
        	return 0;
	if ((n & (n - 1)) == 0)
    		return 1;
	return (0);
}

//last_word
int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] && ((av[1][i] == ' ' || av[1][i] == '\t') && (av[1][i + 1] != ' ' && av[1][i] == '\t' && av[1][i + 1] >= 33 && av[1][i + 1] <= 126))
				j = i + 1;
			i++;
		}
		while (av[1][i] >= 33 && av[1][i] <= 126)
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//max
int	max(int *tab, unsigned int len)
{
	unsigned int	i = 0;
	int	max = tab[i];

	if (len == 0)
		return (0);
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}


//print_bits
void	print_bits(unsigned char octet)
{
	unsigned char	c;
	int	i = 7;

	while (i >= 0)
	{
		c = ((octet >> i) & 1) + '0';
		write(1, &c, 1);
		i++;
	}
}

//swap_bits
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

//reverse_bits
unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	rev = 0;

	while (i > 0)
	{
		rev = rev * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (rev);
}

//wdmatch
int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 2)
	{
		while (av[2][i])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
		{
			i = 0;
			while (av[1][i])
			{
				write(1, &av[1][i]; 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
		
//level_3$$$$$$$$$$$$$$$$$$$$$$
//add_prime_sum

int	atoi(char *s)
{
	int	v = 0;
	int	sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s = '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		v = (v * 10) + (*s - '0');
		s++;
	}
	return (v * sign);
}

int	is_prime(int n)
{
	int	i = 2;

	if (n <= 1)
		return (0);
	
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr2(int n)
{
	char	c;

	if (n > 9)
		putnbr2(n / 10)
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



//tab-mult

int	atoi(char *s)
{
	int	v = 0;
	int	sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s = '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		v = (v * 10) + (*s - '0');
		s++;
	}
	return (v * sign);
}

void	putnbr(int n)
{
	char	c;

	if (n > 9)
		putnbr(n / 10);
	c = (n % 10) + '0'
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	n = 0;
	int	i = 1;

	if (ac == 2)
	{
		n = atoi(av[1]);
		while (i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(n);
			write(1, " = ", 3);
			putnbr(n * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
	write(1, "\n", 1);
	return (0);
}

//epur_str___expand_str
int	main(int av, char **av)
{
	int	i = 0;
	int	flag = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
				flag = 1;
			if (av[1][i] != ' ' && (av[1][i] >= 33 && av[1][i] <= 126))
			{
				if (flag == 1)
					write(1, " ", 1);
				write(1, &av[1][i], 1);//expand_str_with_3_spaces
				flag = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
			
//ft_atoi_base/*
/*
int	is_valid(char c, int base)
{
	char	digit1[16] = "0123456789abcdef";
	char	digit2[16] = "0123456789ABCDEF";
	int	i = 0;

	while (i < base)
	{
		if (c == digit1[i] || c == digit2[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	v = 0;
	int	sign = 1;

	if (str_base < 2 || str_base > 16)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && is_valid(*str, str_base))
	{
		if (*str >= '0' && *str <= '9')
			v = v * str_base + (*str - '0');
		else if (*str >= 'a' && *str <= 'f')
			v = v * str_base + (*str - 'a' + 10);
		else if (*str >= 'A' && *str <= 'F')
			v = v * str_base + (*str - 'A' + 10);
		str++;
	}
	return (v * sign);
}
*/
//smarter_version
int	ft_atoi_base(const char *str, int str_base)
{
	int	v = 0;
	int	sign = 1;

	if (str_base < 2 || str_base > 16)
		return (0);
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
	return (v * sign);
}



//list_size

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	len = 0;

	if (!begin_list == NULL)
		return (0);
	while (begin_list)
	{
		begin_list = begin_list->next;
		len++;
	}
	return (len);
}

//ft_range

#include <stdlib.h>
int	*ft_range(int start, int end)
{
	int	i = 0;
	int	len = 0;
	char	*range;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	if (end >= start)
	{
		while (i < len)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}
	
//ft_rrange
#include <stdlib.h>
int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len = 0;
	char	*range;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	if (end >= start)
	{
		while (i < len)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			range[i] = end;
			end++;
			i++;
		}
	}
	return (range);
}
	

//hidenp
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 3)
	{
		while (av[2][j] && av[1][i])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

//lcm

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
		return (0);
	if (a >= b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

//pgcd
int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	c;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a > 0 && b > 0)
		{
			while (b != 0)
			{
				c = b;
				b = a % b;
				a = c;
			}
			printf("%d", a);
		}
	}
	write(1, "\n", 1);
	return (0);
}
		
//print_hex

int	atoi(char *s)
void	print_hex(int n)
{
	char	base[16] = "0123456789abcdef";
	char	c;
	
	if (n >= 16)
		print_hex(n / 16)
	c = base[n % 16];
	write(1, &c, 1);
}


int	main(int ac, char **av)
{
	int	i = 0;
	int	n = 0;


	if (ac == 2)
	{
		n = atoi(av[1][i]);
		if (n >= 0)
			print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}

//rstr_capitalizer
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 1;

	if (ac > 1)
	{
		while (av[j][i])
		{
			i = 0;
			while (av[j][i])
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
					av[j][i] = av[j][i] + 32;
				if ((av[j][i] >= 'a' && av[j][i] <= 'z')
					&& (av[j][i + 1] == ' ' || av[j][i + 1] == '\t'))
					av[j][i] = av[j][i] - 32;
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	if (ac == 1)
		write(1, "\n", 1);
	return (0);
}


///&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
///level_4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 

//flood_fill
#include "flood_fill.h"
void	fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] != to_fill)
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.y - 1, cur.x}, to_fill);// the way of writing (t_point){,}
	fill(tab, size, (t_point){cur.y + 1, cur.x}, to_fill);
	fill(tab, size, (t_point){cur.y, cur.x + 1}, to_fill);
	fill(tab, size, (t_point){cur.y, cur.x - 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}


//fprime

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 2;
	int	n = 0;

	if (ac == 2)
	{
		n = atoi(av[1])
		if (n == 1)
			printf("1");
		while (i <= n)
		{
			if (n % i == 0)
			{
				printf("%d", i);
				if (i == n)//to decide where to stop printing *
					break;
				printf("*");
				n = n / i;
				i = 2;
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

//itoa
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char	*s;
	int	i = 0;
	int	len = 0;
	long	ln;
	long	m;

	m = nbr;
	ln = nbr;
	if (nbr == 0)
	{
		len = 1;
		s = malloc(sizeof(char) * 2);
		if (!s)
			return (NULL);
		s[0] = '0';
		s[1] = '\0';	
	}
	else if (nbr < 0)
	{
		ln = -ln;
		len++;
		while (ln != 0)
		{
			ln = ln / 10;
			len++;
		}
		s = malloc(sizeof(char) * (len + 1));
		if (!s)
			return (NULL);
		s[0] = '-';	
		s[len] = '\0';
		m = -m;
		i = len - 1;
		while (i > 0)
		{
			s[i] = m % 10 + '0';
			m = m / 10;
			i--;
		}
	}
	else
	{
		while (nbr != 0)
		{
			nbr = nbr / 10;
			len++;
		}
		s = malloc(sizeof(char) * (len + 1));
		if (!s)
			return (NULL);
		s[len] = '\0';
		i = len - 1;
		while (i >= 0)
		{
			s[i] = m % 10 + '0';
			m = m / 10;
			i--;
		}
	}
	return (s);
}
/*
int	main(void)
{
	int	i = -1658880;

	printf("%s", ft_itoa(i));
	return (0);
}*/


//for_each

#include <ft_list.h>
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	(*f)(begin_list->data);
	begin_list = begin_list->next;
}

//list_remove_if

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	cur;

	if (*begin_list == NULL)
		return;
	cur = *begin_list;
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);/////begin_list
	}
	else
		ft_list_remove_if(&cur->next, data_ref, cmp);//////////////&cur->next
}

//sort_tab

void	sort_int_tab(int *tab, unsigned int size)
{
	int	swap;
	unsigned int	i = 0;

	if (size <= 1)
		return;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;//start from the first if there is swap
		}
		else
			i++;
	}
}
		
//sort_list
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*start;
	int	swap;

	if (!lst || !lst->next)
		return;
	start = lst;
	while (lst && lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)//difference between (*cmp) and cmp
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;//restart from the begging if there is a swap
		}
		else
			lst = lst->next;
	}
	return (start);
}

//split

#include <unistd.h>
#include <stdlib.h>

char	*strncpy(char *des, char *src, int n)
{
	int	i = 0;

	while (i < n && src[i])
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int	wc = 0;
	int	start = 0;
	char	**out;
	int	k = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	out = malloc(sizeof(char *) * (wc + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > start)
		{
			out[k] = malloc(sizeof(char) * (i - start + 1));
			if (!out[k])
			{
				while (k >= 0)/////////////////freeout all
				{
					free(out[k]);
					k--;
				}
				free(out);
				return (NULL);
			}
			strncpy(out[k], &str[start], (i - start));//&the address of the fist c
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}

/////rev_wstr

int	main(int ac, char **av)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	int	flag = 0;

	if (n == 2)
	{
		while (av[1][i])
			i++;
		while (av[1][i])
		{
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
				i--;
			end = i;
			while (tr[i] && str[i] != ' ' && str[i] != '\t')
				i--;
			start = i + 1;
			flat = start;
			if (end >= start)
			{
				while (start <= end)
				{
					write(1, &av[1][start], 1);
					start++;
				}
				if (flag != 0)
						write(1, ' ', 1);/////////space
			}
		}
	}
	write(1, '\n', 1);
	return (0);
}
				
//rostring

int	main(int ac, char **av)
{
	int	i = 0;
	int	start = 0;
	int	end = 0;

	if (ac >= 2)
	{
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		start = i;
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		end = i - 1;
		while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		if (av[1][i])
		{
			while (av[1][i])
			{
				if (av[1][i] == ' ' || av[1][i] == '\t')
				{
					while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
						i++;
					if (av[1][i])
						write(1, " ", 1);//////////space
				}
				else
				{
					write(1, &av[1][i], 1);
					i++;
				}
			}
			write(1, " ", 1);/////////space
		}
		while (end >= start)
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
	

