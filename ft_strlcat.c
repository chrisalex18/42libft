/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:09:38 by cquespaz          #+#    #+#             */
/*   Updated: 2022/06/21 16:07:18 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && (dst_len + i) < (dstsize - 1))
		{
			((char *)dst)[dst_len + i] = ((char *)src)[i];
			i++;
		}
		dst[dst_len + i] = 0;
	}
	if (dst_len >= dstsize)
	{
		dst_len = dstsize;
	}
	return (dst_len + src_len);
}
