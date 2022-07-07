/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 09:37:17 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/07 17:32:37 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	num;

	num = count * size;
	if (num < count || num < size)
		return (NULL);
	ptr = (void *)malloc(num);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, num);
	return (ptr);
}
