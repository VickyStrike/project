# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/30 12:58:48 by sbenning          #+#    #+#              #
#*   Updated: 2016/08/14 23:05:04 by sbenning         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME =			rabbit

SRC =			main.c\
				rb_init.c\
				rb_game.c\
				rb_get_texture.c\
				rb_game_loop.c\
				rb_get_event.c\
				rb_create_window.c\
				rb_create_rend.c\
				rb_draw.c\
				rb_quit_hdl.c\
				rb_window_event_hdl.c\
				rb_key_hdl.c\
				rb_mouse_hdl.c\
				rb_key_escape_hdl.c\
				rb_key_fullscreen_hdl.c\
				rb_key_disco_hdl.c\
				rb_key_right_image.c\
				rb_set_anim_rect.c\
				rb_create_anim.c\
				rb_quit.c

SRC_DIR =		srcs/

RSRC =			$(addprefix $(SRC_DIR), $(SRC))

DEPEND =		rabbit.h

OBJ =			$(RSRC:.c=.o)

LIB_FT =		libft.a

LIB_FT_DIR =	../../lib/

LIBFT =			ft

HEADER =		includes/

CC =			gcc

FLAG =			-Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(addprefix $(LIB_FT_DIR), $(LIB_FT)) $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) -L $(LIB_FT_DIR) -l$(LIBFT) -lSDL2 -lSDL2_image

%.o : %.c $(addprefix $(HEADER), $(DEPEND))
	$(CC) $(FLAG) -o $@ -I $(HEADER) -I $(addprefix $(LIB_FT_DIR), $(HEADER)) -c $<

$(addprefix $(LIB_FT_DIR), $(LIB_FT)):
	make -C $(LIB_FT_DIR)

clean:
	rm -f $(OBJ)
	make clean -C $(LIB_FT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIB_FT_DIR)

re: fclean all
