#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/08/11 21:19:57 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =		pendu

SRC =		main.c\
			draw_pendu.c\
			get_letter.c\
			is_finish.c\
			put_msg.c\
			put_victory.c\
			set_letter.c\
			pendu.c\
			m_pendu.c\
			m_put_msg.c\
			ask_word.c\
			ask_name.c

OBJ =		$(SRC:.c=.o)

HEADER =	../../lib/includes

all : lib $(NAME)

$(NAME) : $(OBJ)
	gcc -Wall -Wextra -Werror -o $@ $^ -L../../lib -lft

%.o : %.c
	gcc -Wall -Wextra -Werror -c $< -o $@ -I$(HEADER)

lib :
	make -C../../lib

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
