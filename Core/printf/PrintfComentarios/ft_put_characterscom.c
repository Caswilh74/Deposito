/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_characterscom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:17:23 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/14 08:24:56 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"  // Inclui o cabeçalho para ter acesso às declarações das funções
#include <unistd.h>      // Necessário para a função write()

/**
 * Função que imprime um caractere e incrementa o contador de caracteres impressos em 1.
 * 
 * @param c Caractere a ser impresso.
 * @param count Ponteiro para o contador de caracteres impressos.
 */
void	ft_putchar_count(int c, int *count)
{
	// A função 'write' escreve o caractere na saída padrão (stdout).
	// '1' indica que estamos escrevendo na saída padrão (stdout).
	// '&c' é o endereço do caractere que será impresso.
	// O último parâmetro '1' indica que estamos escrevendo 1 byte (um único caractere).
	write(1, &c, 1);

	// Incrementa o contador de caracteres impressos
	(*count)++;
}

/**
 * Função que imprime uma string e incrementa o contador pelo número de caracteres impressos.
 * 
 * @param str String a ser impressa.
 * @param count Ponteiro para o contador de caracteres impressos.
 */
void	ft_putstr_count(char *str, int *count)
{
	// Verifica se a string é nula, caso seja, imprime "(null)".
	// O caso especial de string nula deve ser tratado, pois pode ser um erro ao passar um ponteiro nulo para uma string.
	if (!str)
	{
		// Chama a função para imprimir "(null)" em vez de um ponteiro nulo.
		ft_putstr_count("(null)", count);
		return ; // Retorna após imprimir "(null)" para não tentar acessar o ponteiro nulo.
	}

	// Enquanto a string não chegar ao final (enquanto houver caracteres a serem impressos)
	while (*str)
	{
		// Chama ft_putchar_count para imprimir cada caractere da string.
		// A função 'ft_putchar_count' já cuida de incrementar o contador de caracteres.
		ft_putchar_count(*str++, count);  // Avança para o próximo caractere após imprimir o atual.
	}
}

Explicação do Código:
Função ft_putchar_count:

    Objetivo: Imprime um único caractere e incrementa o contador de caracteres impressos.
    Parâmetros:
        c: O caractere que deve ser impresso.
        count: Ponteiro para o contador de caracteres impressos. Este valor será incrementado após a impressão do caractere.
    Detalhes:
        Usa a função write(1, &c, 1) para escrever o caractere na saída padrão (stdout), onde:
            1 especifica a saída padrão (stdout).
            &c é o endereço de memória do caractere a ser impresso.
            O último parâmetro (1) indica que estamos escrevendo 1 byte (um caractere).
        Após imprimir, o contador de caracteres (*count) é incrementado.

Função ft_putstr_count:

    Objetivo: Imprime uma string de caracteres e incrementa o contador com o número de caracteres impressos.
    Parâmetros:
        str: A string que deve ser impressa.
        count: Ponteiro para o contador de caracteres impressos. A cada caractere impresso, o contador será incrementado.
    Detalhes:
        Se a string str for nula (NULL), a função imprime "(null)" no lugar.
            Isso é feito chamando recursivamente a função ft_putstr_count com a string "(null)".
        Caso contrário, a função percorre cada caractere da string e chama a função ft_putchar_count para imprimir os caracteres.
        A função usa a notação *str++, que é um operador de incremento que acessa o caractere atual e, em seguida, move o ponteiro para o próximo caractere.

Resumo:

    ft_putchar_count: Responsável por imprimir um único caractere e atualizar o contador de caracteres.
    ft_putstr_count: Responsável por imprimir uma string de caracteres e atualizar o contador de caracteres. Ela também lida com o caso especial de strings nulas, imprimindo "(null)" em vez de tentar acessar um ponteiro nulo.

Essas funções são parte das implementações auxiliares do ft_printf, e ajudam a imprimir diferentes tipos de dados enquanto mantêm o controle sobre o número de caracteres impressos, o que é necessário para a função ft_printf retornar o valor correto.