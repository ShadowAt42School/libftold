/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:55:29 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/04 23:25:57 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *string;

	string = (unsigned char*)str;
	while (n)
	{
		if (*string == c)
			break ;
		string++;
		n--;
	}
	return (n == 0 ? NULL : (void*)(string));
}
