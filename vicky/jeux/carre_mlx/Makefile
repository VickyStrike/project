#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/07/23 15:14:28 by sbenning          #+#    #+#             *#
#*   Updated: 2016/08/12 13:20:11 by sbenning         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME =			test

SRC =			main.c

OBJ =			$(SRC:.c=.o)

HEADER_FT =		../../lib/includes

HEADER_MLX =	mlx

FLAG =		-Wall -Wextra -Werror

all : lib_mlx lib $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAG) -o $@ $^ -L../../lib -lft -Lmlx -lmlx -lXext -lX11

%.o : %.c
	gcc $(FLAG) -c $< -o $@ -I$(HEADER_FT) -I$(HEADER_MLX)

lib_mlx :
	make -Cmlx

lib :
	make -C../../lib

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
