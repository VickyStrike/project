/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_key_hdl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:39:00 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 15:56:44 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

t_event		g_event_key[SIZE_EVENT_KEY] = {\
				{SDLK_ESCAPE, rb_key_escape_hdl},\
				{SDLK_RIGHT, rb_key_right_image_hdl},\
				{SDLK_f, rb_key_fullscreen_hdl},\
				{SDLK_d, rb_key_disco_hdl}\
				};

int			rb_keydown_hdl(SDL_Event *event, t_window *window)
{
	int		i;
	int		finish;

	i = 0;
	while (i < SIZE_EVENT_KEY)
	{
		if (event->key.keysym.sym == g_event_key[i].type)
		{
			if ((finish = g_event_key[i].rb_type_hdl(event, window)))
				return (finish);
			else
				break ;
		}
		i++;
	}
	return (0);
}

int			rb_keyup_hdl(SDL_Event *event, t_window *window)
{
	return (0);
	(void)event;
	(void)window;
}
