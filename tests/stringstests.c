/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 23:00:11 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/06 02:27:06 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	*string;
	char	newstr[100];
	char	newstr1[100];

	string = "Hello World!";
	/*
	** strlen
	*/
	ft_putstr("Strlen\n");
	printf("%lu\n", (ft_strlen(string)));
	ft_putnbr(ft_strlen(string));
	ft_putstr("\n*****************************\n");
	/*
	** strDup
	*/
	ft_putstr("Strdup\n");
	ft_putstr(ft_strdup(string));
	ft_putstr("\n*****************************\n");
	/*
	** strCpy
	*/
	ft_putstr("StrCpy\n");
	ft_putstr(ft_strcpy(newstr, string));
	ft_putstr(strcpy(newstr, string));
	ft_putstr(ft_strcpy(newstr, "Balblbdlbfdlbdfllbfdldbl"));
	ft_putstr(strcpy(newstr, "Balblbdlbfdlbdfllbfdldbl"));
	ft_putstr("\n*****************************\n");
	/*
	** strNCpy
	*/
	ft_putstr("StrNCpy\n");
	ft_putstr(ft_strncpy(newstr, string, 5));
	ft_putchar('\n');
	ft_putstr(strncpy(newstr, string, 5));
	ft_putstr("\n*****************************\n");
	/*
	** strCat
	*/
	ft_putstr("Strcat\n");
	ft_putstr(newstr);
	ft_putstr("\n");
	ft_putstr(ft_strcat(newstr, string));
	ft_putchar('\n');
	ft_putstr(strcat(newstr, string));
	ft_putstr("\n*****************************\n");
	/*
	** strNCat
	*/
	ft_putstr("StrNcat\n");
	ft_putstr(newstr);
	ft_putstr("\n");
	ft_putstr(ft_strncat(newstr, string, 10));
	ft_putchar('\n');
	ft_putstr(strncat(newstr, string, 10));
	ft_putstr("\n*****************************\n");
	/*
	** strLCat
	*/
	ft_putstr("StrLcat\n");
	ft_putstr(newstr);
	ft_putstr("\n");
	ft_putnbr(ft_strlen(newstr));
	ft_putstr("\n");
	ft_strncpy(newstr1, newstr, ft_strlen(newstr));
	ft_putstr(newstr1);
	ft_putstr("\n");
	ft_putnbr(ft_strlcat(newstr, string, ft_strlen(newstr) + 12 + 1));
	ft_putchar('\n');
	ft_putstr(newstr);
	ft_putchar('\n');
	ft_putnbr(strlcat(newstr1, string, ft_strlen(newstr1) + 12 + 1));
	ft_putchar('\n');
	ft_putstr(newstr1);
	ft_putstr("\n*****************************\n");
	/*
	** strChr
	*/
	ft_putstr("StrChr\n");
	ft_strcpy(newstr, "http://www.tutorialspoint.com");
	ft_strcpy(newstr1, "http://www.tutorialspoint.com");
	ft_putstr(newstr);
	ft_putstr("\n");
	ft_putstr(newstr1);
	ft_putstr("\n");
	ft_putstr(ft_strchr(newstr, '.'));
	ft_putchar('\n');
	ft_putstr(strchr(newstr1, '.'));
	ft_putstr("\n*****************************\n");
	/*
	** strRChr
	*/
	ft_putstr("StrRChr\n");
	ft_strcpy(newstr, "http://www.tutorialspoint.com");
	ft_strcpy(newstr1, "http://www.tutorialspoint.com");
	ft_putstr(newstr);
	ft_putstr("\n");
	ft_putstr(newstr1);
	ft_putstr("\n");
	ft_putstr(ft_strrchr(newstr, '.'));
	ft_putchar('\n');
	ft_putstr(strrchr(newstr1, '.'));
	ft_putstr("\n*****************************\n");
	/*
	** strStr
	*/
	ft_putstr("Strstr\n");
	ft_strcpy(newstr, "http://www.tutorialspoint.com");
	ft_strcpy(newstr1, "http://www.tutorialspoint.com");
	ft_putstr(newstr);
	ft_putstr("\n");
	ft_putstr(newstr1);
	ft_putstr("\n");
	ft_putstr(ft_strstr(newstr, "www"));
	ft_putchar('\n');
	ft_putstr(strstr(newstr, "www"));
	ft_putstr("\n*****************************\n");
	return (0);
}
