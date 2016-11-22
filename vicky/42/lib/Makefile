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

SRC =		srcs/ft_delspace_a.c\
			srcs/ft_delspace.c\
			srcs/ft_delspace_p.c\
			srcs/ft_putchar.c\
			srcs/ft_puterr.c\
			srcs/ft_putstr.c\
			srcs/ft_putnbr.c\
			srcs/ft_strcpy.c\
			srcs/ft_strcat.c\
			srcs/ft_strcmp.c\
			srcs/ft_strlen.c\
			srcs/ft_strlowcase.c\
			srcs/ft_strupcase.c\
			srcs/ft_swap.c\
			srcs/ft_is_digit.c\
			srcs/ft_is_neg.c\
			srcs/ft_atoi.c\
			srcs/ft_puttab.c\
			srcs/ft_split_whitespaces.c\
			srcs/ft_strswap.c\
			srcs/ft_sort_wordtab.c\
			srcs/ft_advanced_sort_wordtab.c\
			srcs/ft_mlist_push_back.c\
			srcs/ft_list_push_back.c\
			srcs/ft_create_elem.c\
			srcs/ft_mcreate_elem.c\
			srcs/ft_list_clear.c\
			srcs/ft_mlist_clear.c\
			srcs/ft_strdup.c\
			srcs/ft_bzero.c\
			srcs/ft_memset.c\
			srcs/ft_strchr.c\
			srcs/ft_concat.c\
			srcs/ft_file_to_str.c\
			srcs/ft_str_to_file.c\
			srcs/ft_raw_term.c\
			srcs/ft_print_words_tables.c\
			srcs/ft_destroy_tab.c\
			srcs/ft_tablen.c\
			srcs/ft_get_opt.c

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
