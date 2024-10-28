/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:37:11 by gcarvalh          #+#    #+#             */
/*   Updated: 2024/10/28 17:25:58 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stddef.h>
# include <string.h>
# include <unistd.h>

/* Character classification functions */
int		ft_isalpha(int c); // Checks if a character is alphabetic.
int		ft_isdigit(int c); // Checks if a character is a digit.
int		ft_isalnum(int c); // Checks if a character is alphanumeric.
int		ft_isascii(int c); // Checks if a character is ASCII.
int		ft_isprint(int c); // Checks if a character is printable.

/* Character conversion functions */
int		ft_toupper(int c); // Converts a character to uppercase.
int		ft_tolower(int c); // Converts a character to lowercase.

/* String manipulation functions */
size_t	ft_strlen(const char *str);
// Calculates the length of a string.
char	*ft_strchr(const char *s, int c);
// Finds the first occurrence of a character.
char	*ft_strrchr(const char *s, int c);
// Finds the last occurrence of a character.
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// Compares two strings lexicographically.
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// Copies a string to a destination buffer.
size_t	ft_strlcat(char *dest, const char *src, size_t size);
// Concatenates two strings.
char	*ft_strnstr(const char *big, const char *little, size_t len);
// Finds a substring within a string.
char	*ft_strdup(const char *s);
// Duplicates a string.
char	*ft_substr(char const *s, unsigned int start, size_t len);
// Extracts a substring.
char	*ft_strjoin(char const *s1, char const *s2);
// Concatenates two strings.
char	*ft_strtrim(char const *s1, char const *set);
// Trims characters from a string.
char	**ft_split(char const *s, char c);
// Splits a string into an array of strings by a delimiter character.
char	*ft_itoa(int n);
// Converts an integer to a string.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Applies a function to each character of a string.
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
// Applies a function to each character of a string.
int		ft_atoi(const char *str);
// Converts a string to an integer.

/* Memory manipulation functions */
void	ft_bzero(void *s, size_t n);
// Sets n bytes of memory to zero.
void	ft_memset(void *ptr, int c, size_t len);
// Fills a block of memory with a given value.
void	*ft_memcpy(void *dst, const void *src, size_t n);
// Copies memory from one location to another.
void	*ft_memmove(void *dst, const void *src, size_t len); // Copies memory,
void	*ft_memchr(const void *s, int c, size_t n);
// Finds the first occurrence of a character in a memory block.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// Compares two memory blocks.
void	*ft_calloc(size_t nmemb, size_t size);
// Allocates memory and initializes it to zero.

/* Additional functions */
void	ft_putchar_fd(char c, int fd);
// Writes a character to a file descriptor.
void	ft_putstr_fd(char *s, int fd); // Writes a string to a file descriptor.
void	ft_putendl_fd(char *s, int fd);
// Writes a string followed by a newline to a file descriptor.
void	ft_putnbr_fd(int n, int fd);
// Writes an integer to a file descriptor.

#endif