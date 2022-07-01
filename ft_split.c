/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:15:45 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/01 19:04:00 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_putwords(char **s1, char const *s, char c, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	while (word < num_words)
	{
		word_len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s1[word++] = ft_substr(s, (i - word_len), word_len);
	}
	s1[word] = 0;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char			**s1;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_countwords(s, c);
	s1 = malloc(sizeof(char *) * (num_words + 1));
	if (!s1)
		return (0);
	ft_putwords(s1, s, c, num_words);
	return (s1);
}
