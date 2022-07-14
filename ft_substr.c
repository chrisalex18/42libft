/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:59:11 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/07 19:07:44 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	num;
	size_t	i;
	char	*sub_str;

	if (!s)
		return (0);
	num = ft_strlen(s);
	if (num < start)
		len = 0;
	if ((num + start) < len)
		len = num - start;
	sub_str = (char *)malloc(len + 1);
	if (!sub_str)
		return (0);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[i + start];
		i++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
