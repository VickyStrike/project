/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_create_anim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 21:34:29 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/16 19:29:11 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void			rb_create_anim(t_window *window)
{
	window->animation.rate = 100;
	window->animation.timer = 0;
	window->animation.current_i = 0;

	if (!(window->animation.anim[0].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_1.png")))
	{
		ft_putstr("€rreur chargement image 1.\n");
		ft_putstr((char *)SDL_GetError);
	}
	window->animation.anim[0].flag = 1;
	if (!(window->animation.anim[1].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_2.png")))
	{
		ft_putstr("€rreur chargement image 2.\n");
		ft_putstr((char *)SDL_GetError);
	}
	window->animation.anim[1].flag = 0;
	if (!(window->animation.anim[2].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_3.png")))
	{
		ft_putstr("€rreur chargement image 3.\n");
		ft_putstr((char *)SDL_GetError);
	}
	window->animation.anim[2].flag = 0;
	if (!(window->animation.anim[3].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_4.png")))
	{
		ft_putstr("€rreur chargement image 4.\n");
		ft_putstr((char *)SDL_GetError);
	}
	window->animation.anim[3].flag = 0;
	if (!(window->animation.anim[4].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_5.png")))
	{
		ft_putstr("€rreur chargement image 5.\n");
		ft_putstr((char *)SDL_GetError);
	}
	window->animation.anim[4].flag = 0;
	if (!(window->animation.anim[5].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_6.png")))
	{
		ft_putstr("€rreur chargement image 6.\n");
		ft_putstr((char *)SDL_GetError);
	}
	window->animation.anim[5].flag = 0;
	return ;
}
