/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_get_event.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:19:47 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 22:54:33 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

t_event			g_event_type[SIZE_TYPE_EVENT] = {\
					{SDL_QUIT, rb_quit_hdl},\
					{SDL_WINDOWEVENT, rb_window_event_hdl},\
					{SDL_KEYDOWN, rb_keydown_hdl},\
					{SDL_KEYUP, rb_keyup_hdl},\
					{SDL_MOUSEBUTTONDOWN, rb_mouse_button_down_hdl},\
					{SDL_MOUSEBUTTONUP, rb_mouse_button_up_hdl}\
					};

int				rb_get_event(t_window *window)
{
	SDL_Event	event;
	int			i;
	int			finish;

	while (SDL_PollEvent(&event))
	{
		i = 0;
		while (i < SIZE_TYPE_EVENT)
		{
			if (event.type == (size_t)g_event_type[i].type)
			{
				if ((finish = g_event_type[i].rb_type_hdl(&event, window)))
					return (finish);
				else
					break ;
			}
			i++;
		}
	}
	return (0);
}
