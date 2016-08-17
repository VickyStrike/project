#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/07/27 16:33:41 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		test

SRC =		main.c

OBJ =		$(SRC:.c=.o)

HEADER =	../../lib/includes

all : lib $(NAME)

$(NAME) : $(OBJ)
	gcc -Wall -Werror -Wextra -o $@ $^ -L../../lib -lft

%.o : %.c
	gcc -Wall -Werror -Wextra -c $< -o $@ -I$(HEADER)

lib :
	make -C../../lib

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
