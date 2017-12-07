/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 01:13:09 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/07 01:44:07 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int		a;
	int		b;

	/* Is digit */
	a = '0';
	b = 'H';
	ft_putstr("is_digit");
	ft_putstr("\n");
	ft_putnbr(ft_isdigit(a));
	ft_putstr("\n");
	ft_putnbr(isdigit(a));
	ft_putstr("\n");
	ft_putnbr(ft_isdigit(b));
	ft_putstr("\n");
	ft_putnbr(isdigit(b));
	ft_putstr("\n************************************\n");
	/* Is alpha */
	a = '0';
	b = 'H';
	ft_putstr("is_alpha");
	ft_putstr("\n");
	ft_putnbr(ft_isalpha(a));
	ft_putstr("\n");
	ft_putnbr(isalpha(a));
	ft_putstr("\n");
	ft_putnbr(ft_isalpha(b));
	ft_putstr("\n");
	ft_putnbr(isalpha(b));
	ft_putstr("\n************************************\n");
	/* Is ascii */
	a = '0';
	b = 'H';
	ft_putstr("is_ascii");
	ft_putstr("\n");
	ft_putnbr(ft_isascii(a));
	ft_putstr("\n");
	ft_putnbr(isascii(a));
	ft_putstr("\n");
	ft_putnbr(ft_isascii(b));
	ft_putstr("\n");
	ft_putnbr(isascii(b));
	ft_putstr("\n");
	ft_putnbr(ft_isascii(200));
	ft_putstr("\n");
	ft_putnbr(isascii(200));
	ft_putstr("\n************************************\n");
	/* Is print */
	a = '0';
	b = 'H';
	ft_putstr("is_print");
	ft_putstr("\n");
	ft_putnbr(ft_isprint(a));
	ft_putstr("\n");
	ft_putnbr(isprint(a));
	ft_putstr("\n");
	ft_putnbr(ft_isprint(b));
	ft_putstr("\n");
	ft_putnbr(isprint(b));
	ft_putstr("\n");
	ft_putnbr(ft_isprint(300));
	ft_putstr("\n");
	ft_putnbr(isprint(300));
	ft_putstr("\n************************************\n");
	/* Is alpnum */
	a = '0';
	b = 'H';
	ft_putstr("is_alnum");
	ft_putstr("\n");
	ft_putnbr(ft_isalnum(a));
	ft_putstr("\n");
	ft_putnbr(isalnum(a));
	ft_putstr("\n");
	ft_putnbr(ft_isalnum(b));
	ft_putstr("\n");
	ft_putnbr(isalnum(b));
	ft_putstr("\n");
	ft_putnbr(ft_isalnum(300));
	ft_putstr("\n");
	ft_putnbr(isalnum(300));
	ft_putstr("\n************************************\n");
}
