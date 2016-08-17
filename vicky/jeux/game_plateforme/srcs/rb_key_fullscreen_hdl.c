/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_key_fullscreen_hdl.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 14:26:01 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 14:37:21 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

int			rb_key_fullscreen_hdl(SDL_Event *event, t_window *window)
{
	if (window->flag_fscreen)
	{
		SDL_SetWindowFullscreen(window->window, 0);
		window->flag_fscreen = 0;
	}
	else
	{
		SDL_SetWindowFullscreen(window->window, SDL_WINDOW_FULLSCREEN_DESKTOP);
		window->flag_fscreen = 1;
		SDL_Delay(1);
	}
	return (0);
	(void)event;
}
