/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:34:54 by cquespaz          #+#    #+#             */
/*   Updated: 2022/06/29 17:41:50 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s1)
		return (0);
	i = 0;
	while (ft_isset(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_isset(set, s1[j - 1]))
		j--;
	str = malloc((j - i) + 1);
	if (!str)
		return (0);
	k = 0;
	while (i < j)
		str[k++] = s1[i++];
	str[k] = 0;
	return (str);
}
