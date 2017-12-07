/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 20:41:51 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/03 21:13:43 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *destc;
	unsigned char *srcc;

	destc = (unsigned char*)dest;
	srcc = (unsigned char*)src;
	if ((unsigned char*)dest == (unsigned char*)src)
		return (void*)(dest);
	if (destc < srcc)
		while (n--)
			*(destc++) = *(srcc++);
	if (destc > srcc)
	{
		dest += n - 1;
		srcc += n - 1;
		while (n--)
			*(destc--) = *(srcc--);
	}
	return (void*)(destc);
}
