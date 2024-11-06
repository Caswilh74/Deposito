/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmart <brunmart@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:36 by brunmart          #+#    #+#             */
/*   Updated: 2024/10/30 10:18:43 by brunmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * Counts the number of words in a string separated by a specific character.
 *
 * @param s The string to analyze.
 * @param c The delimiter character.
 * @return The number of words in the string.
 */

static int	ft_countwords(const char *s, char c)
{
	size_t	i;
	int		words;
	int		inword;

	i = 0;
	words = 0;
	inword = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!inword)
			{
				words++;
				inword = 1; // We are now in a word
			}
		}
		else
			inword = 0; // We are outside of a word
		i++;
	}
	return (words);
}

/**
 * Duplicates a substring from the original string.
 *
 * @param str The original string.
 * @param start The starting index of the substring.
 * @param finish The ending index of the substring.
 * @return A new string containing the substring, or NULL on failure.
 */

static char	*word_dup(const char *str, size_t start, size_t finish)
{
	char	*word;
	int		i;

	i = 0;
	if (!str || start >= finish)
		return (NULL);
	word = malloc(finish - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

/**
 * Populates an array with words split from the original string.
 *
 * @param split The array to populate with words.
 * @param s The original string.
 * @param c The delimiter character.
 */

static void	populate_split(char **split, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		ws;

	i = 0;
	j = 0;
	ws = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
		{
			if (ws == -1)
				ws = i; // Mark the start of a word
		}
		else if (ws != -1)
		{
			split[j++] = word_dup(s, ws, i); // Duplicate the word found
			ws = -1; // Reset word start index
		}
		i++;
	}
	if (ws != -1)
		split[j++] = word_dup(s, ws, i); // Handle the last word
	split[j] = NULL;
}

/**
 * Splits a string into an array of words using a specified delimiter.
 *
 * @param s The string to split.
 * @param c The delimiter character.
 * @return An array of strings (words) or NULL if the input string is NULL.
 */

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	populate_split(split, s, c); // Fill the array with words
	return (split); // Return the array of words
}

/**
 * Summary of ft_split:
 * 
 * The ft_split function takes a string and a delimiter character, splitting 
 * the string into an array of words. It counts the number of words using 
 * `ft_countwords`, duplicates each word using `word_dup`, and populates 
 * the array with these words. The resulting array is null-terminated. 
 * This function is useful for breaking up strings based on specific 
 * delimiters for further processing.
 */
