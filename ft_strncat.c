/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 02:05:17 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/05 02:50:31 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		dest_int;

	dest_int = ft_strlen(dest);
	ft_memcpy((dest + dest_int), src, n);
	dest[dest_int + n] = '\0';
	return (dest);
}
