/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfcom.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 08:14:03 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/14 08:14:27 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H  // Verifica se FT_PRINTF_H não foi definido ainda
#define FT_PRINTF_H  // Define FT_PRINTF_H para evitar múltiplas inclusões do mesmo arquivo

/*
** ==========================================================
**                         Printing
** ==========================================================
*/

/**
 * Função para imprimir um único caractere e contar quantos caracteres foram impressos.
 * 
 * @param c Caractere a ser impresso.
 * @param count Ponteiro para o contador de caracteres.
 */
void	ft_putchar_count(int c, int *count);

/**
 * Função para imprimir uma string e contar quantos caracteres foram impressos.
 * 
 * @param str String a ser impressa.
 * @param count Ponteiro para o contador de caracteres.
 */
void	ft_putstr_count(char *str, int *count);

/**
 * Função para imprimir um ponteiro e contar quantos caracteres foram impressos.
 * 
 * @param ptr Ponteiro a ser impresso.
 * @param count Ponteiro para o contador de caracteres.
 */
void	ft_putptr_count(void *ptr, int *count);

/**
 * Função para imprimir um número inteiro e contar quantos caracteres foram impressos.
 * 
 * @param nbr Número inteiro a ser impresso.
 * @param count Ponteiro para o contador de caracteres.
 */
void	ft_putnbr_count(int nbr, int *count);

/**
 * Função para imprimir um número inteiro sem sinal e contar quantos caracteres foram impressos.
 * 
 * @param nbr Número inteiro sem sinal a ser impresso.
 * @param count Ponteiro para o contador de caracteres.
 */
void	ft_putnbr_unsigned_count(unsigned int nbr, int *count);

/**
 * Função para imprimir um número em formato hexadecimal e contar quantos caracteres foram impressos.
 * 
 * @param ptr Número a ser impresso em formato hexadecimal.
 * @param hex_digits String contendo os dígitos hexadecimais (pode ser "0123456789abcdef" ou "0123456789ABCDEF").
 * @param count Ponteiro para o contador de caracteres.
 */
void	ft_put_hex_count(unsigned long ptr, const char *hex_digits, int *count);

/*
** ==========================================================
**                         FT_Printf
** ==========================================================
*/

/**
 * Função principal que replica a função printf da biblioteca padrão.
 * 
 * @param str A string formatada com os especificadores de formato (como %d, %s, etc).
 * @param ... Argumentos que serão impressos conforme os especificadores na string.
 * @return Retorna o número total de caracteres impressos.
 */
int	ft_printf(const char *str, ...);

#endif //FT_PRINTF_H  // Fim da verificação de múltiplas inclusões.

Explicação do Arquivo de Cabeçalho:

    Guardas de Inclusão:
    O #ifndef FT_PRINTF_H e #define FT_PRINTF_H são usados para garantir que o conteúdo do arquivo seja incluído apenas uma vez, mesmo que o arquivo seja referenciado múltiplas vezes (o que pode ocorrer em projetos maiores com múltiplos arquivos).

    Funções de Impressão:
    As funções listadas no início (ft_putchar_count, ft_putstr_count, ft_putptr_count, etc.) são todas responsáveis por imprimir diferentes tipos de dados (caracteres, strings, números inteiros, ponteiros, números hexadecimais) e, ao mesmo tempo, contar quantos caracteres foram impressos. O contador é passado por referência usando o ponteiro count.

    Cada uma dessas funções recebe um tipo de dado específico e um ponteiro para o contador de caracteres. Elas devem imprimir o dado correspondente e atualizar o contador para que a função ft_printf possa retornar o número total de caracteres impressos.

    Função ft_printf: A declaração de ft_printf mostra que essa função recebe uma string de formato (str) e um número variável de argumentos (...), assim como a função printf padrão da biblioteca C. Ela vai iterar sobre a string de formato, processando os especificadores de formato e chamando as funções de impressão para cada tipo de argumento.

Como usar este arquivo:

Esse arquivo de cabeçalho é a interface entre o código principal (onde a função ft_printf e suas funções auxiliares são implementadas) e outros arquivos ou módulos que precisam usá-las. Para usar a função ft_printf em outro arquivo, basta incluir este cabeçalho:

#include "ft_printf.h"

Isso permitirá que você utilize as funções de impressão (ft_putchar_count, ft_putstr_count, etc.) e a função principal ft_printf em outros arquivos C do seu projeto.