/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 00:20:38 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/03 20:18:45 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *str, int c, size_t n)
{
	unsigned long int		lic;
	int						mover;

	mover = 0;
	lic = 0;
	c = (unsigned char)c;
	lic = (unsigned int)(((((lic << 8) | c) << 16) |
		(((unsigned int)c << 8) | c)) << 8 | c);
	lic = ((unsigned long int)lic << 32) | (unsigned long int)lic;
	ft_bzero(str, n);
	while (n > 0 && (str += mover) && (n -= mover) && !(mover = 0))
	{
		if (n >= 8 && (mover = sizeof(long int)))
			*(unsigned long int*)str |= lic;
		else if (n >= 4 && (mover = sizeof(int)))
			*(unsigned int*)str |= (unsigned int)lic;
		else if ((mover = sizeof(char)))
			*(unsigned char*)str |= (unsigned char)lic;
	}
	return (str);
}
