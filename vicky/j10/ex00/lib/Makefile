#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/07/23 15:43:31 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		libft.a

SRC =		srcs/ft_delspace_a.c\
			srcs/ft_delspace.c\
			srcs/ft_delspace_p.c\
			srcs/ft_putchar.c\
			srcs/ft_puterr.c\
			srcs/ft_putstr.c\
			srcs/ft_strcat.c\
			srcs/ft_strcmp.c\
			srcs/ft_strlen.c\
			srcs/ft_strlowcase.c\
			srcs/ft_swap.c

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
