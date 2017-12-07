/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 00:32:31 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/04 23:19:47 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	int		mover;

	mover = 0;
	while (n > 0 && (n -= mover) && (str1 += mover) && (str2 += mover))
	{
		mover = 0;
		if (n >= 8)
		{
			*(long int*)str1 = *(long int*)str2;
			mover = sizeof(long int);
		}
		else if (n >= 4)
		{
			*(int*)str1 = *(int*)str2;
			mover = sizeof(int);
		}
		else
		{
			*(char*)str1 = *(char*)str2;
			mover = sizeof(char);
		}
	}
	return (str1);
}
