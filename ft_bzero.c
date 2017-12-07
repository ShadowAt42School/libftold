/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:17:14 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/02 00:46:20 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		mover;

	while (n)
	{
		if (n >= 8)
			*(long int *)s &= (mover = sizeof(long int)) ? 0x00 : 0x00;
		else if (n >= 4)
			*(int *)s &= (mover = sizeof(int)) ? 0x00 : 0x00;
		else
			*(char *)s &= (mover = sizeof(char)) ? 0x00 : 0x00;
		s += mover;
		n -= mover;
	}
}
