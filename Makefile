# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/01 21:51:41 by maghayev          #+#    #+#              #
#    Updated: 2017/12/07 01:44:30 by maghayev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
GCCW = gcc -Wall -Wextra -Werror -g
SRC  = ft_bzero.c  ft_memcpy.c ft_memset.c ft_memccpy.c ft_memchr.c \
		ft_memmove.c ft_memcmp.c \
		\
		ft_putchar.c ft_putstr.c ft_putnbr.c ft_print_byte.c \
		ft_object_bit_print.c \
		\
		ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
		ft_strncat.c ft_strsub.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strstr.c \
		\
		ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isalnum.c \
# SRC = ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_strrchr.c         \
#       ft_atoi.c ft_isdigit.c ft_memcpy.c ft_strcmp.c ft_strncat.c       \
#       ft_strstr.c ft_bzero.c ft_isprint.c ft_memmove.c ft_strcpy.c      \
#       ft_strncmp.c ft_tolower.c ft_isalnum.c ft_memccpy.c ft_memset.c   \
#       ft_strdup.c ft_strncpy.c ft_toupper.c ft_isalpha.c ft_memchr.c        \
#       ft_strcat.c ft_strlcat.c ft_strnstr.c                                 \
#       ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c         \
#       ft_striter.c ft_striteri.c ft_strmap.c ft_putchar.c ft_putstr.c   \
#       ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c        \
#       ft_strtrim.c ft_putnbr.c ft_strsplit.c ft_itoa.c ft_putendl.c         \
#       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strnlen.c    \
#       ft_lstnew.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstmap.c   \
#       ft_lstdel.c ft_bzero_bwd.c ft_memcpy_bwd.c ft_isspace.c ft_print2d.c  \
#       ft_print_byte.c ft_bubblesort.c ft_print_array_int.c ft_lstpush.c ft_push.c
OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@echo "Compiling..."
	@$(GCCW) -I./ -c $(SRC)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)
	@echo "\nFinished!\n"

clean:
	@echo "Cleanning...\n"
	@/bin/rm -f $(OBJECT)
	@echo "Cleaned\n"

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
