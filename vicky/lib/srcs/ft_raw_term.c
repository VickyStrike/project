/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raw_term.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 12:31:04 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/10 14:36:52 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static struct termios		g_global;

void						ft_raw_term(void)
{
	struct termios			mine;

	tcgetattr(0, &g_global);
	mine = g_global;
	mine.c_lflag &= ~(ECHO | ICANON);
	mine.c_cc[VMIN] = 1;
	mine.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &mine);
	return ;
}

void						ft_reset_term(void)
{
	tcsetattr(0, TCSADRAIN, &g_global);
	return ;
}
