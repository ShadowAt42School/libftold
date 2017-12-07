/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmorytests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 21:53:52 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/04 01:15:01 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(void)
{
	char	*string;
	char	stringcpy[50];
	char	stringcpy1[50];
	char	*stringconst;

	stringconst = "Hello World! tratra t;sfm sfn\n";
	ft_bzero(stringcpy, 50);
	string = (char *)malloc(sizeof(char) * 4);
	string[0] = 'a';
	string[1] = 'a';
	string[2] = 'a';
	string[3] = '\0';

	/*
	** Bzero tests
	*/
	ft_putstr(string);
	ft_bzero(string, 4);
	ft_putstr(string);
	ft_putstr("\n********************\n");

	/*
	** Memset tests
	*/
	ft_putstr("Memset tests\n");
	ft_memcpy(stringcpy, stringconst, ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_memset(stringcpy, '$', 9);
	ft_putstr(stringcpy);
	ft_putstr("\n********************\n");

	/*
	** Memchr tests
	*/
	ft_putstr("Memchr tests\n");
	ft_memcpy(stringcpy, stringconst, ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_putstr((char*)(ft_memchr(stringcpy, '$', 9)));
	ft_putstr("\n********************\n");
	ft_memcpy(stringcpy, stringconst, ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_putstr((char*)(ft_memchr(stringcpy, 'e', 9)));
	ft_putstr("\n********************\n");

	/*
	** MemCpy
	*/
	ft_putstr(stringcpy);
	ft_putchar('\n');
	ft_putstr(stringconst);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_memcpy(stringcpy, stringconst, ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_putchar('\n');
	memcpy(stringcpy, stringconst, ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_putchar('\n');
	ft_bzero(stringcpy, 30);
	ft_memcpy(stringcpy1, stringconst, 12);
	ft_putstr(stringcpy1);
	ft_putchar('\n');
	ft_bzero(stringcpy, 30);
	memcpy(stringcpy1, stringconst, 12);
	ft_putstr(stringcpy1);
	ft_putchar('\n');
	ft_putstr("\n********************\n");

	/*
	** MemCCpy
	*/
	ft_putstr("\nMemCCpy tests\n");
	ft_putstr(stringcpy);
	ft_putstr(stringconst);
	ft_putchar('\n');
	ft_putstr("a: ");
	ft_bzero(stringcpy, 30);
	ft_memccpy(stringcpy, stringconst, 'e', ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_putchar('\n');
	ft_putstr("a 1: ");
	ft_bzero(stringcpy, 30);
	memccpy(stringcpy, stringconst, 'e', ft_strlen(stringconst));
	ft_putstr(stringcpy);
	ft_putchar('\n');
	ft_memccpy(stringcpy1, stringconst, 'W', 12);
	ft_putstr(stringcpy1);
	ft_putchar('\n');
	memccpy(stringcpy1, stringconst, 'W', 12);
	ft_putstr(stringcpy1);
	ft_putchar('\n');
	ft_putstr("\n********************\n");

	/*
	** MemCmp
	*/
	ft_putstr("\nMemCmp tests\n");
	ft_bzero(stringcpy, 30);
	ft_putstr(stringconst);
	ft_memcpy(stringcpy, stringconst, 30);
	ft_putnbr(ft_memcmp(stringcpy + 1, stringconst, 5));
	ft_bzero(stringcpy, 30);
	ft_memcpy(stringcpy, stringconst, 30);
	ft_putnbr(memcmp(stringcpy + 1, stringconst, 5));
	ft_putchar('\n');
	return (0);
}
