/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 13:18:03 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/24 19:49:24 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include "ft.h"

typedef void		(*t_putop)(int, int);

typedef struct		s_opp
{
	char			*key;
	t_putop			val;
}					t_opp;

extern t_opp		gl_opptab[6];

void				ft_do_op(char **av);

void				ft_add(int a, int b);
void				ft_sub(int a, int b);
void				ft_mult(int a, int b);
void				ft_div(int a, int b);
void				ft_mod(int a, int b);
void				ft_usage(int a, int b);


#endif
