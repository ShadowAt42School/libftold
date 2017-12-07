/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 01:14:10 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/07 01:04:31 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	kmp_table_gen(const char *needle, int *table)
{
	int		pos;
	int		cnd;

	pos = 1;
	cnd = 0;
	table[0] = -1;
	while (pos < (int)ft_strlen(needle))
	{
		if (needle[pos] == needle[cnd])
		{
			table[pos] = table[cnd];
			pos++;
			cnd++;
		}
		else
		{
			table[pos] = cnd;
			cnd = table[cnd];
			while (cnd >= 0 && needle[pos] != needle[cnd])
				cnd = table[cnd];
			pos++;
			cnd++;
		}
	}
	// table[pos] = cnd;
}

static char	*kmp_alg(const char *hay, const char *needle,
					int needle_l, int haystack_l, int *table)
{
	int		haystack_c;
	int		needle_c;

	needle_c = 0;
	haystack_c = 0;
	while (haystack_c + needle_c < haystack_l)
	{
		if (needle[needle_c] == hay[haystack_c + needle_c])
		{
			if (needle_c++ == needle_l)
				return (char*)(hay += haystack_c);
		}
		else
		{
			if (table[needle_c] > -1)
			{
				haystack_c += needle_c - table[needle_c];
				needle_c = table[needle_c];
			}
			else
			{
				haystack_c += needle_c + 1;
				needle_c = 0;
			}
		}
	}
	return (NULL);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		*table;
	int		needle_l;
	int		haystack_l;

	needle_l = ft_strlen(needle);
	haystack_l = ft_strlen(haystack);
	table = (int*)malloc(sizeof(int) * needle_l);
	kmp_table_gen(needle, table);
	return (kmp_alg(haystack, needle, needle_l, haystack_l, table));
}
