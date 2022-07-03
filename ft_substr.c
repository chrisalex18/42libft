/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:59:11 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/03 20:31:02 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub_str;

	sub_str = NULL;
	if (!s)
		return (0);
	sub_str = malloc(len + 1);
	if (!sub_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		sub_str[j++] = s[i++];
	sub_str[j] = 0;
	return (sub_str);
}
