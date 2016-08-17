#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/07/29 20:28:31 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		colle-2

SRC =		main.c\
			ft_concat.c\
			ft_count.c\
			ft_check_colle.c\
			ft_cmp_colle.c\
			colle-00.c\
			colle-01.c\
			colle-02.c\
			colle-03.c\
			colle-04.c\
			ft_print_colle.c\
			ft_read.c

OBJ =		$(SRC:.c=.o)

HEADER =	../lib/includes

all : lib $(NAME)

$(NAME) : $(OBJ)
	gcc -Wall -Werror -Wextra -o $@ $^ -L../lib -lft

%.o : %.c
	gcc -c $< -o $@ -I$(HEADER)

lib :
	make -C../lib

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
