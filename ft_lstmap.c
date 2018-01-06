/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 18:39:23 by maghayev          #+#    #+#             */
/*   Updated: 2018/01/05 21:09:58 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_res;
	t_list	*lst_worker;
	t_list	*lst_cpy;

	if (!lst || !f)
		return (NULL);
	lst_cpy = f(lst);
	lst_res = ft_lstnew(lst_cpy->content, lst_cpy->content_size);
	lst_worker = lst_res;
	lst = lst->next;
	while (lst)
	{
		lst_cpy = f(lst);
		lst_worker->next = ft_lstnew(lst_cpy->content, lst_cpy->content_size);
		lst_worker = lst_worker->next;
		lst = lst->next;
	}
	return (lst_res);
}
