/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 01:04:40 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/06 01:10:54 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_move;

	str_move = (char*)str;
	while (*str)
	{
		if (*str == c)
			str_move = (char*)str;
		str++;
	}
	return (str_move ? str_move : NULL);
}
