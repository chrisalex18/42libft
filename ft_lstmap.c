/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cquespaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:52:54 by cquespaz          #+#    #+#             */
/*   Updated: 2022/07/07 16:31:15 by cquespaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux_lst;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		aux_lst = ft_lstnew(f(lst->content));
		if (!aux_lst)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, aux_lst);
		lst = lst->next;
	}
	return (new_lst);
}
