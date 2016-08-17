/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:45:09 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 18:48:01 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void		index_to_pos(int *pos, int x, int y)
{
	*pos = x * 9 + y;
	return ;
}

void		pos_to_index(int pos, int *x, int *y)
{
	*x = pos / 9;
	*y = pos % 9;
	return ;
}
