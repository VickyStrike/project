#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/07/25 13:42:37 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		test

SRC =		main.c\
			ft_list_push_front.c\
			ft_create_elem.c\
			ft_list_size.c

OBJ =		$(SRC:.c=.o)

HEADER =	../../lib/includes

all : lib $(NAME)

$(NAME) : $(OBJ)
	gcc -o $@ $^ -L../../lib -lft

%.o : %.c
	gcc -c $< -o $@ -I$(HEADER)

lib :
	make -C../../lib

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
