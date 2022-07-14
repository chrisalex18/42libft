/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:31:06 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/07 16:39:39 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_putnbr(char *str, long nbr, size_t size)
{
	str[size--] = 0;
	while (nbr > 0)
	{
		str[size--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == 0)
	{
		str[size--] = '0';
	}
	else if (size == 0 && str[1] != 0)
	{
		str[size] = '-';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	if (n > 0)
	{
		size = 0;
	}
	else
	{
		size = 1;
		nbr = -nbr;
	}
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	ft_putnbr(str, nbr, size);
	return (str);
}
