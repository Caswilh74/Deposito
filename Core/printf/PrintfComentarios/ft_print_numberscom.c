/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numberscom.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:25:28 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/14 08:26:59 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"  // Inclui o cabeçalho para ter acesso às declarações das funções

/**
 * Função que imprime um número em formato hexadecimal, com base no alfabeto fornecido.
 * 
 * @param ptr Número a ser impresso em hexadecimal.
 * @param hex_digits Alfabeto hexadecimal para determinar como os dígitos serão impressos.
 * @param count Ponteiro para o contador de caracteres impressos.
 */
void	ft_put_hex_count(unsigned long ptr, const char *hex_digits, int *count)
{
	// Se o número for maior ou igual a 16, continua dividindo por 16 (recursivamente) para obter todos os dígitos hexadecimais
	if (ptr >= 16)
	{
		// Chama a função recursivamente com o número dividido por 16 para obter o próximo dígito hexadecimal
		ft_put_hex_count(ptr / 16, hex_digits, count);
		// Imprime o dígito hexadecimal correspondente ao restante da divisão (ptr % 16)
		ft_putchar_count(hex_digits[ptr % 16], count);
	}
	else
		// Caso o número seja menor que 16, apenas imprime o último dígito hexadecimal
		ft_putchar_count(hex_digits[ptr % 16], count);
}

/**
 * Função que imprime um ponteiro em formato hexadecimal.
 * A impressão começa com "0x" e segue com o valor hexadecimal do ponteiro.
 * 
 * @param ptr Ponteiro a ser impresso.
 * @param count Ponteiro para o contador de caracteres impressos.
 */
void	ft_putptr_count(void *ptr, int *count)
{
	// Se o ponteiro for nulo, imprime "(nil)".
	// Isso é necessário para evitar o erro de tentar imprimir um ponteiro nulo.
	if (!ptr)
	{
		ft_putstr_count("(nil)", count);  // Chama a função que imprime "(nil)"
		return ;  // Retorna para não continuar a execução se o ponteiro for nulo
	}

	// Imprime o prefixo "0x" para indicar que o valor a seguir será em hexadecimal
	ft_putstr_count("0x", count);
	
	// Converte o ponteiro para unsigned long (para evitar problemas com ponteiros negativos) 
	// e chama a função para imprimir o número em formato hexadecimal
	ft_put_hex_count((unsigned long)ptr, "0123456789abcdef", count);
}

/**
 * Função que imprime um número inteiro sem sinal.
 * 
 * @param nbr Número sem sinal a ser impresso.
 * @param count Ponteiro para o contador de caracteres impressos.
 */
void	ft_putnbr_unsigned_count(unsigned int nbr, int *count)
{
	// Se o número for maior ou igual a 10, divide-o para obter os dígitos subsequentes
	if (nbr >= 10)
	{
		// Chama recursivamente a função para imprimir os dígitos à esquerda (de forma crescente)
		ft_putnbr_count(nbr / 10, count);
		// Imprime o dígito atual (o último dígito)
		ft_putchar_count('0' + nbr % 10, count);
	}
	else
		// Caso o número seja menor que 10, simplesmente imprime o último dígito
		ft_putchar_count('0' + nbr % 10, count);
}

/**
 * Função que imprime um número inteiro.
 * Se o número for negativo, imprime um sinal negativo antes do valor absoluto.
 * 
 * @param nbr Número a ser impresso.
 * @param count Ponteiro para o contador de caracteres impressos.
 */
void	ft_putnbr_count(int nbr, int *count)
{
	// Se o número for negativo, imprime o sinal de negativo
	if (nbr < 0)
	{
		ft_putchar_count('-', count);  // Imprime o sinal de negativo
		nbr = -nbr;  // Torna o número positivo (para poder imprimir os dígitos corretamente)
	}
	
	// Chama a função para imprimir o número positivo sem sinal
	ft_putnbr_unsigned_count(nbr, count);
}

Explicação Detalhada das Funções:
Função ft_put_hex_count:

    Objetivo: Imprime um número em formato hexadecimal.
    Parâmetros:
        ptr: O número que deve ser impresso em formato hexadecimal.
        hex_digits: A sequência de caracteres que representa os dígitos hexadecimais (ex.: "0123456789abcdef" ou "0123456789ABCDEF").
        count: Ponteiro para o contador de caracteres impressos.
    Detalhes:
        A função utiliza recursão para dividir o número por 16, obtendo os dígitos hexadecimais do número de forma reversa (da direita para a esquerda).
        Em cada chamada recursiva, a função calcula ptr % 16 para obter o próximo dígito hexadecimal e o imprime usando a função ft_putchar_count.

Função ft_putptr_count:

    Objetivo: Imprime um ponteiro em formato hexadecimal, com o prefixo 0x (para indicar que é um valor hexadecimal).
    Parâmetros:
        ptr: O ponteiro a ser impresso.
        count: Ponteiro para o contador de caracteres impressos.
    Detalhes:
        Se o ponteiro for NULL, a função imprime "(nil)".
        Caso contrário, a função imprime o prefixo "0x" e em seguida chama a função ft_put_hex_count para imprimir o valor hexadecimal do ponteiro.
        O ponteiro é convertido para unsigned long antes de ser passado para a função hexadecimal, já que ponteiros podem ser negativos em algumas arquiteturas, o que causaria problemas ao imprimi-los diretamente como números inteiros.

Função ft_putnbr_unsigned_count:

    Objetivo: Imprime um número inteiro sem sinal (positivo) e atualiza o contador de caracteres impressos.
    Parâmetros:
        nbr: O número a ser impresso.
        count: Ponteiro para o contador de caracteres impressos.
    Detalhes:
        A função é chamada recursivamente para imprimir cada dígito do número (da esquerda para a direita).
        Para cada chamada recursiva, o número é dividido por 10 para deslocar os dígitos, e o dígito final (obtido com nbr % 10) é impresso.

Função ft_putnbr_count:

    Objetivo: Imprime um número inteiro, incluindo um sinal negativo caso o número seja negativo.
    Parâmetros:
        nbr: O número a ser impresso.
        count: Ponteiro para o contador de caracteres impressos.
    Detalhes:
        Se o número for negativo, o sinal '-' é impresso primeiro, e depois o número é tornado positivo para que a impressão dos dígitos funcione normalmente.
        A função ft_putnbr_unsigned_count é chamada para imprimir o número positivo.

Resumo:

    ft_put_hex_count: Converte um número para hexadecimal e o imprime, tratando a recursão para pegar os dígitos corretamente.
    ft_putptr_count: Imprime um ponteiro em formato hexadecimal, com o prefixo 0x, e lida com o caso de ponteiro nulo.
    ft_putnbr_unsigned_count: Imprime um número inteiro positivo, dividindo recursivamente até que todos os dígitos sejam impressos.
    ft_putnbr_count: Imprime um número inteiro, tratando o caso de números negativos e chamando a função de impressão para números positivos.

Essas funções são responsáveis por lidar com a impressão de números, ponteiros e valores em formato hexadecimal, e são chamadas pela função principal ft_printf para formatar e imprimir os dados passados pelos especificadores de formato.
