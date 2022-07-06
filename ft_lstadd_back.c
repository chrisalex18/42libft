/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 21:50:39 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/06 22:05:26 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_lst;

	if (new)
	{
		if (*lst)
		{
			new_lst = ft_lstlast(*lst);
			new_lst->next = new;
		}
		else
			*lst = new;
	}
}
