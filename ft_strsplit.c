/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:20:22 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/18 14:55:35 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 && str[i] != c)
			count++;
		else if (str[i] != c && str[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static char	*get_word(char const *str, char c, int start)
{
	char	*word;
	int		i;
	int		length;
	int		tail;

	length = 0;
	tail = start;
	while (str[tail] != c && str[tail] != '\0')
	{
		tail++;
		length++;
	}
	word = (char *)malloc(sizeof(*word) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < tail)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		word;

	if (!s || !c)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			split[word++] = get_word(s, c, i);
		else if (s[i] != c && s[i - 1] == c && s[i])
			split[word++] = get_word(s, c, i);
		i++;
	}
	split[word] = NULL;
	return (split);
}
