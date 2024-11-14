/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfcom.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:58:51 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/14 08:15:53 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * Função que trata o argumento a ser impresso dependendo do tipo especificado no formato.
 * 
 * @param args va_list contendo os valores para o '%'.
 * @param str String principal contendo o '%'.
 * @param count Ponteiro para o contador de dígitos impressos.
 */
void	ft_handle_arg(va_list args, const char *str, int *count)
{
	// Se o formato for '%c', chama a função para imprimir um caractere
	if (*str == 'c')
		ft_putchar_count(va_arg(args, int), count);
	// Se o formato for '%s', chama a função para imprimir uma string
	else if (*str == 's')
		ft_putstr_count(va_arg(args, char *), count);
	// Se o formato for '%p', chama a função para imprimir um ponteiro
	else if (*str == 'p')
		ft_putptr_count(va_arg(args, void *), count);
	// Se o formato for '%d' ou '%i', chama a função para imprimir um número inteiro
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_count(va_arg(args, int), count);
	// Se o formato for '%u', chama a função para imprimir um número inteiro sem sinal
	else if (*str == 'u')
		ft_putnbr_unsigned_count(va_arg(args, unsigned int), count);
	// Se o formato for '%x', chama a função para imprimir um número em hexadecimal minúsculo
	else if (*str == 'x')
		ft_put_hex_count(va_arg(args, unsigned int), "0123456789abcdef", count);
	// Se o formato for '%X', chama a função para imprimir um número em hexadecimal maiúsculo
	else if (*str == 'X')
		ft_put_hex_count(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	// Se o formato for '%%', imprime um caractere '%'
	else if (*str == '%')
		ft_putchar_count('%', count);
}

/**
 * Função que replica a função printf da biblioteca padrão.
 *
 * @param str String principal contendo os '%'.
 * @param ... Valores para os '%'.
 * @return Retorna a quantidade total de caracteres impressos.
 */
int	ft_printf(const char *str, ...)
{
	va_list	args; // Declara a lista de argumentos variáveis
	int		count; // Variável para contar quantos caracteres foram impressos

	count = 0; // Inicializa o contador de caracteres como 0
	va_start(args, str); // Inicia a manipulação dos argumentos variáveis, começando após o 'str'
	
	// Enquanto não chegar ao final da string 'str'
	while (*str)
	{
		// Se encontrar um '%', verifica se o próximo caractere não é nulo
		if (*str == '%' && *(str + 1))
		{
			str++; // Avança para o próximo caractere após o '%'
			ft_handle_arg(args, str, &count); // Chama a função que lida com o tipo de argumento
		}
		// Se não for um '%', apenas imprime o caractere atual
		else
			ft_putchar_count(*str, &count);
		
		str++; // Avança para o próximo caractere da string
	}
	return (count); // Retorna a quantidade total de caracteres impressos
}

Explicação do Código:

    Função ft_handle_arg:
        Esta função recebe o tipo de dado a ser impresso e decide qual função auxiliar chamar, dependendo do especificador de formato (%c, %s, %d, etc.).
        Cada tipo de dado é extraído da lista args (usando va_arg) e a função correspondente é chamada para imprimir o valor.

    Função ft_printf:
        A função começa inicializando a lista de argumentos variáveis com va_start.
        Ela percorre a string str, caractere por caractere, procurando por '%'.
        Quando encontra um '%', verifica qual é o próximo caractere, que define o tipo do argumento (ex: %d para inteiros, %s para strings).
        Chama a função ft_handle_arg para processar o valor correspondente.
        Se não for um '%', imprime o caractere diretamente usando a função ft_putchar_count.
        A função retorna a quantidade total de caracteres impressos.

Funções Auxiliares:

    As funções ft_putchar_count, ft_putstr_count, ft_putptr_count, ft_putnbr_count, etc., são responsáveis por realmente imprimir os valores na tela e atualizar o contador de caracteres.

Essa explicação deve ajudar a entender como a função ft_printf funciona, e como ela trata os diferentes tipos de dados passados como argumentos.