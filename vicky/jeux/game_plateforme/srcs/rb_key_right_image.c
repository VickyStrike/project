/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_key_right_image.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 15:49:13 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 22:35:33 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

int			rb_key_right_image_hdl(SDL_Event *event, t_window *window)
{
/*	if (!(window->texture[1].texture = rb_get_texture(window, "ressources/yoshi_walk/yoshi_2.png")))
	{
		ft_putstr("Erreur chargement image\n");
		ft_putstr((char *)SDL_GetError);
		return (1);
	}
	SDL_QueryTexture(window->texture[1].texture, NULL, NULL, &window->texture[1].rect.w, &window->texture[1].rect.h);
	window->texture[1].rect.x = RB_WIND_W / 2 - window->texture[1].rect.w / 2;
	window->texture[1].rect.y = RB_WIND_H / 2 - window->texture[1].rect.h / 2;
	window->texture[0].flag = 0;
	window->texture[1].flag = 1;
*/	return (0);
	(void)event;
	(void)window;
}
