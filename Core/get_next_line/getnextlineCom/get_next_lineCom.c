/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_lineCom.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:27:01 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/11/15 08:32:56 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

// Função para concatenar duas strings (s1 e s2) e liberar a memória de s1
char	*ft_join_free(char *s1, char *s2)
{
    char	*temp_buffer;

    // Concatena s1 e s2 usando a função ft_strjoin e armazena em temp_buffer
    temp_buffer = ft_strjoin(s1, s2);
    
    // Libera a memória de s1, pois não precisamos mais dela
    free(s1);
    
    // Retorna o buffer temporário que contém a string concatenada
    return (temp_buffer);
}

// Função para criar uma nova string contendo a próxima linha do buffer
char	*ft_fill_line(const char *buffer)
{
    char	*line;
    size_t	line_len;
    size_t	i;

    // Inicializa o comprimento da linha
    line_len = 0;
    
    // Conta o comprimento da linha até encontrar '\n' ou o fim do buffer
    while (buffer[line_len] && buffer[line_len] != '\n')
        line_len++;
    
    // Se encontrou um '\n', inclui ele na linha
    if (buffer[line_len] == '\n')
        line_len++;
    
    // Aloca memória para a nova linha (incluindo o caractere '\0' no final)
    line = (char *)malloc(line_len + 1);
    
    // Se não conseguir alocar memória, retorna NULL
    if (!line)
        return (NULL);
    
    i = -1;
    
    // Copia os caracteres do buffer para a linha
    while (++i < line_len)
        line[i] = buffer[i];
    
    // Adiciona o caractere '\0' no final da string
    line[i] = '\0';
    
    // Retorna a linha construída
    return (line);
}

// Função para atualizar o buffer removendo a linha já lida
char	*ft_update_buffer(char *buffer, const char *line)
{
    size_t	buffer_len;
    size_t	line_len;
    ssize_t	i;
    char	*new_buffer;

    // Obtém os tamanhos do buffer e da linha
    buffer_len = ft_strlen(buffer);
    line_len = ft_strlen(line);
    
    // Se o buffer não tem conteúdo restante após remover a linha, libera o buffer e retorna NULL
    if (buffer_len == line_len)
        return (free(buffer), NULL);
    
    // Aloca um novo buffer com o tamanho restante após a linha lida
    new_buffer = (char *)malloc(buffer_len - line_len + 1);
    
    // Se não conseguir alocar memória, libera o buffer e retorna NULL
    if (!new_buffer)
        return (free(buffer), NULL);
    
    i = -1;
    
    // Copia o restante do conteúdo do buffer (após a linha lida) para o novo buffer
    while (buffer[line_len + ++i])
        new_buffer[i] = buffer[line_len + i];
    
    // Adiciona o caractere '\0' no final do novo buffer
    new_buffer[i] = '\0';
    
    // Libera o buffer antigo, pois não é mais necessário
    free(buffer);
    
    // Retorna o novo buffer com o conteúdo restante
    return (new_buffer);
}

// Função para preencher o buffer com dados do arquivo até encontrar uma linha
char	*ft_fill_buffer(int fd, char *buffer)
{
    char	*temp_buffer;
    ssize_t	bytes_read;

    // Se o buffer estiver vazio, aloca um buffer de 1 byte (inicializa como vazio)
    if (!buffer)
        buffer = ft_calloc(1, 1);
    
    // Se não conseguir alocar memória para o buffer, retorna NULL
    if (!buffer)
        return (NULL);
    
    // Aloca um buffer temporário para ler dados do arquivo
    temp_buffer = (char *)malloc(BUFFER_SIZE + 1);
    
    // Se não conseguir alocar memória para o buffer temporário, libera o buffer e retorna NULL
    if (!temp_buffer)
        return (free(buffer), NULL);
    
    bytes_read = 1; // Inicializa a leitura
    
    // Lê o arquivo até encontrar um caractere '\n' ou o fim do arquivo
    while (bytes_read > 0)
    {
        // Lê até BUFFER_SIZE bytes do arquivo
        bytes_read = read(fd, temp_buffer, BUFFER_SIZE);
        
        // Se ocorrer erro na leitura, libera a memória e retorna NULL
        if (bytes_read < 0)
            return (free(buffer), free(temp_buffer), NULL);
        
        // Garante que a string lida seja terminada com '\0'
        temp_buffer[bytes_read] = '\0';
        
        // Junta o conteúdo lido ao buffer existente
        buffer = ft_join_free(buffer, temp_buffer);
        
        // Se não conseguir alocar a nova string no buffer, libera a memória e retorna NULL
        if (!buffer)
            return (free(temp_buffer), NULL);
        
        // Se encontrar um '\n' no buffer, interrompe a leitura
        if (ft_strchr(temp_buffer, '\n'))
            break ;
    }
    
    // Libera o buffer temporário e retorna o buffer com os dados lidos
    return (free(temp_buffer), buffer);
}

// Função principal que lê a próxima linha do arquivo
char	*get_next_line(int fd)
{
    static char	*static_buffer;  // Variável estática que mantém o estado do buffer entre chamadas
    char		*line;

    // Se o descritor de arquivo for inválido ou o tamanho do buffer for inválido, retorna NULL
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    
    // Preenche o buffer com dados do arquivo até encontrar uma linha
    static_buffer = ft_fill_buffer(fd, static_buffer);
    
    // Se não conseguir preencher o buffer, retorna NULL
    if (!static_buffer)
        return (NULL);
    
    // Cria a próxima linha a partir do buffer
    line = ft_fill_line(static_buffer);
    
    // Se não conseguir criar a linha ou a linha for vazia, libera o buffer e retorna NULL
    if (!line || !(line[0]))
    {
        free(static_buffer);
        static_buffer = NULL;
        return (free(line), NULL);
    }
    
    // Atualiza o buffer removendo a linha já lida
    static_buffer = ft_update_buffer(static_buffer, line);
    
    // Retorna a linha lida
    return (line);
}
