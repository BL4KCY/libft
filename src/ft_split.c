/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:48:14 by melfersi          #+#    #+#             */
/*   Updated: 2023/09/30 14:48:14 by melfersi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (word);
}

static void	copy(const char *s, char *world, size_t start, size_t word_len)
{
	size_t	index;

	index = 0;
	while (index < word_len)
	{
		world[index] = s[start + index];
		index++;
	}
	world[index] = 0;
}

static void	split_string(char **sout, size_t word_cout, const char *s, char c)
{
	size_t	index;
	size_t	i;
	size_t	word_len;

	i = 0;
	index = 0;
	word_len = 0;
	while (index < word_cout)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			word_len++;
			i++;
		}
		sout[index] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (sout[index] == NULL)
			return ;
		copy(s, sout[index], i - word_len, word_len);
		index++;
		word_len = 0;
	}
	sout[index] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**str_out;

	if (s == NULL)
		return (NULL);
	word_count = word_counter(s, c);
	str_out = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (str_out == NULL)
		return (NULL);
	split_string(str_out, word_count, s, c);
	return (str_out);
}
