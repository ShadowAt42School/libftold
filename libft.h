/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 20:18:02 by maghayev          #+#    #+#             */
/*   Updated: 2017/12/07 01:46:47 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

/*
** Type defs
*/
typedef	unsigned char	t_byte;

/*
** Casts
** Macroses Part 1
*/
# define LINTP(x) ((long int*)x)
# define INTP(x) ((int*)x)
# define SINTP(x) ((short int*)x)
# define CHRP(x) ((char*)x)
# define TRUE 1
# define FALSE 0

/*
** Sizes
** Macroses Part 2
*/
# define LIS sizeof(long int)
# define LS sizeof(long)
# define IS sizeof(int)
# define SIS sizeof(short int)
# define CS sizeof(char)
# define PS sizeof(char*)

/*
** Logic Based Actions
** Macroses
*/
# define ABS(x) (x < 0 ? -x : x)

/*
** C Type Checks
** Macroses
*/
# define IS_DIGIT(x) (x >= 48 && x <= 57 ? TRUE : FALSE)
# define IS_UPPER(x) (x >= 65 && x <= 90 ? TRUE : FALSE)
# define IS_LOWER(x) (x >= 97 && x <= 122 ? TRUE : FALSE)
# define IS_ALPHA(x) ((IS_UPPER(x) || IS_LOWER(x)) ? TRUE : FALSE)
# define IS_ALNUM(x) (IS_ALPHA(x) || IS_DIGIT(x) ? TRUE : FALSE)
# define IS_PRINT(x) (x >= 32 && x <= 255 ? TRUE : FALSE)
# define IS_NONPRINT(x) (x >= 0 && x <= 31 ? TRUE : FALSE)

/*
**	Strings
*/
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *haystack, const char *needle);

/*
**	System Writes
*/
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_print_byte(t_byte byte);
void	ft_object_bit_print(size_t const size, void const *const ptr);

/*
**	Memmory
*/
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);

/*
**	C Type Checks
*/
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);

#endif
