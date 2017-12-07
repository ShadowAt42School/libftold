/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:43:22 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/04 23:25:55 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*string;

	string = (unsigned char*)s2;
	string = ft_memchr(s2, c, n);
	if (string)
		s1 = ft_memcpy(s1, s2, string - (unsigned char*)s2 + 1);
	else
		s1 = ft_memcpy(s1, s2, n);
	return (s1);
}
