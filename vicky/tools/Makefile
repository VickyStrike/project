#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/08/10 14:41:32 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		test

SRC =		main.c

OBJ =		$(SRC:.c=.o)

HEADER =	../../lib/includes

FLAG =		-Wall -Wextra -Werror

all : lib $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAG) -o $@ $^ -L../../lib -lft

%.o : %.c
	gcc $(FLAG) -c $< -o $@ -I$(HEADER)

lib :
	make -C../../lib

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
