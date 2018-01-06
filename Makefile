# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/01 21:51:41 by maghayev          #+#    #+#              #
#    Updated: 2018/01/05 22:55:05 by maghayev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = gcc
CLFAGS = -Wall -Wextra -Werror
DEPS = libft.h
SRC  = ft_bzero.c  ft_memcpy.c ft_memset.c ft_memccpy.c ft_memchr.c \
		ft_memmove.c ft_memcmp.c ft_memalloc.c ft_memdel.c \
		\
		ft_putchar.c ft_putstr.c ft_putnbr.c ft_print_byte.c \
		ft_object_bit_print.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \
		\
		ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strncat.c ft_strsub.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strjoin.c ft_strtrim.c \
		ft_strsplit.c ft_strwordsdelim.c ft_strlendelim.c ft_strdupdelim.c \
		ft_strtrimdelim.c \
		\
		ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isalnum.c \
		ft_toupper.c ft_tolower.c ft_atoi.c ft_itoa.c \
		\
		ft_lstnew.c

OBJECT = $(SRC:.c=.o)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJECT)
	@ar rc $@ $^
	@ranlib $@
	@echo "Finished!"

clean:
	@echo "Cleanning..."
	@/bin/rm -f $(OBJECT)
	@echo "Cleaned"

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
