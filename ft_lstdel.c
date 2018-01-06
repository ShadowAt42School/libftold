/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 18:18:28 by maghayev          #+#    #+#             */
/*   Updated: 2018/01/05 18:36:22 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst_cur;
	t_list	*next;

	lst_cur = *alst;
	next = lst_cur->next;
	while (lst_cur->next)
	{
		ft_lstdelone(&lst_cur, del);
		lst_cur = next;
		next = lst_cur->next;
	}
	ft_lstdelone(&lst_cur, del);
	*alst = NULL;
}
