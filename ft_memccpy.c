/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 19:43:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/01/02 22:35:18 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*src_str;
	int				str_cpy_len;
	unsigned char	*src_str_c;
	unsigned char	c_cpy;

	c_cpy = (unsigned char)c;
	src_str = (unsigned char*)s2;
	src_str_c = ft_memchr(s2, c_cpy, n);
	str_cpy_len = src_str_c - (unsigned char*)s2 + 1;
	if (src_str_c)
	{
		s1 = ft_memcpy(s1, s2, str_cpy_len);
		return (s1 + str_cpy_len);
	}
	else
		s1 = ft_memcpy(s1, s2, n);
	return (NULL);
}
