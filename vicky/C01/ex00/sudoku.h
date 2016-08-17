/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 16:01:10 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 18:53:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# define SUCCESS 0
# define FAILURE 1
# define UNUSED(X) (void)X
# define TRUE 1
# define FALSE 0

# include "ft.h"

int			resolve(char *str, int pos);
int			r_resolve(char *str, int pos);

int			is_valide(char *str, int pos, char test);
int			is_arg_error(int ac, char **av);

void		make_str(int ac, char **av, char *str);
void		put_sudoku(char *str);
void		pos_to_index(int pos, int *x, int *y);
void		index_to_pos(int *pos, int x, int y);
char		eval(char *str, int x, int y);

#endif
