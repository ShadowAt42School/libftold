/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 01:20:16 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/04 02:53:01 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;

	str1 = (char*)malloc(ft_strlen(s1) + 1);
	if (str1 == NULL)
		return (NULL);
	ft_memcpy(str1, s1, ft_strlen(s1) + 1);
	return ((char*)str1);
}
