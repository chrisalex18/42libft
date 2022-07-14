/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:42:25 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/11 17:26:30 by cquespaz         ###   ########.fr       */
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
