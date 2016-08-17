/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:16:02 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/13 19:30:12 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

int				rb_create_window(t_window *window)
{
	window->window = SDL_CreateWindow(RB_TITLE,\
			SDL_WINDOWPOS_UNDEFINED,\
			SDL_WINDOWPOS_UNDEFINED,\
			RB_WIND_W,\
			RB_WIND_H,\
			(window->flag_fscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : SDL_WINDOW_SHOWN));
	if (!window->window)
	{
		ft_putstr("Erreur : ");
		ft_putstr((char *)SDL_GetError());
		return (-1);
	}
	ft_putstr("Creation fenetre = OK !\n");
	return (0);
}
