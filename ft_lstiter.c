/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 18:24:03 by maghayev          #+#    #+#             */
/*   Updated: 2018/01/05 18:38:06 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst_cur;
	t_list	*next;

	if (!lst || !f)
		return ;
	lst_cur = lst;
	next = lst_cur->next;
	while (lst_cur->next)
	{
		f(lst_cur);
		lst_cur = next;
		next = lst_cur->next;
	}
	f(lst_cur);
}
