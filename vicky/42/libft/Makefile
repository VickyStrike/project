#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/08/11 21:57:52 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		libft.a

SRC =		srcs/ft_bzero.c\
            srcs/ft_isalnum.c\
            srcs/ft_isalpha.c\
            srcs/ft_isascii.c\
            srcs/ft_isdigit.c\
            srcs/ft_isblank.c\
            srcs/ft_islower.c\
            srcs/ft_isprint.c\
            srcs/ft_isupper.c\
            srcs/ft_memalloc.c\
            srcs/ft_memccpy.c\
            srcs/ft_memchr.c\
            srcs/ft_memcmp.c\
            srcs/ft_memcpy.c\
            srcs/ft_memdel.c\
            srcs/ft_memmove.c\
            srcs/ft_memset.c\
            srcs/ft_strcat.c\
            srcs/ft_strchr.c\
            srcs/ft_strclr.c\
            srcs/ft_strcmp.c\
            srcs/ft_strcpy.c\
            srcs/ft_strdel.c\
            srcs/ft_strdup.c\
            srcs/ft_strequ.c\
            srcs/ft_strtrim.c\
            srcs/ft_striter.c\
            srcs/ft_striteri.c\
            srcs/ft_strjoin.c\
            srcs/ft_strlen.c\
            srcs/ft_strmap.c\
            srcs/ft_strmapi.c\
            srcs/ft_strncat.c\
            srcs/ft_strncmp.c\
            srcs/ft_strncpy.c\
            srcs/ft_strnequ.c\
            srcs/ft_strnew.c\
            srcs/ft_strnstr.c\
            srcs/ft_strrchr.c\
            srcs/ft_strstr.c\
            srcs/ft_strsub.c\
            srcs/ft_tolower.c\
            srcs/ft_toupper.c

OBJ =		$(SRC:.c=.o)

HEADER =	includes

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o : %.c
	gcc -c $< -o $@ -I$(HEADER)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

