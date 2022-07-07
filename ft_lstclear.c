/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:09:48 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/07 15:18:35 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new_lst;

	if (!del || !*lst)
		return ;
	while (*lst)
	{
		new_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = new_lst;
	}
	*lst = 0;
}
