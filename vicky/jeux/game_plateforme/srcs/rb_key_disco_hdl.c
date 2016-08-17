/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_key_disco_hdl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:28:51 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 14:38:29 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

int			rb_key_disco_hdl(SDL_Event *event, t_window *window)
{
	if (window->color.c_r == 0x11)
	{
		window->color.c_r = 0xd2;
		window->color.c_g = 0x00;
		window->color.c_b = 0x00;
		window->color.c_a = 0x00;
	}
	else
	{
		window->color.c_r = 0x11;
		window->color.c_g = 0xd4;
		window->color.c_b = 0xbf;
		window->color.c_a = 0xff;
	}
	return (0);
	(void)event;
}
