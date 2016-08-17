/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_set_anim_rect.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 21:59:37 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 23:55:51 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void			rb_set_anim_rect(t_window *window)
{
	int			i;
	SDL_Rect	rect;
	
	SDL_QueryTexture(window->animation.anim[0].texture, NULL, NULL, &rect.w, &rect.h);
	rect.x = RB_WIND_W / 2 - rect.w / 2;
	rect.y = RB_WIND_H / 2 - rect.h / 2;
	printf("x = [%d],\ny = [%d],\nw = [%d],\nh = [%d]\n", rect.x, rect.y, rect.w, rect.h);
	i = 0;
	while (i < 6)
	{
		window->animation.anim[i].rect = rect;
		i++;
	}
	return ;
}
