/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:15:45 by cquespaz          #+#    #+#             */
/*   Updated: 2022/06/30 15:10:29 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	ft_count_words(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		else if (s[i] != c && s[i + 1] == 0)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_split_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word;
	char 	**s1;
	size_t	word_len;

	if (!s)
		return (0);
	s1 = malloc(ft_count_words(s, c) + 1);
	i = 0;
	j = 0;
	word = 0;
	word_len = 0;
	while (word < count_words)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
			word_len++;
		s1[word] = ft_substr(s, j, word_len);
		j = j + i;
		word++;
		word_len = 0;
	}
}

char	**ft_splitchar const *s, char c)
{

}
