/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 11:38:01 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 23:52:27 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void		rb_draw(t_window *window)
{
	int		tick;
	int		*current;

	tick = SDL_GetTicks();
	current = &window->animation.current_i;
	SDL_SetRenderDrawColor(window->rend, window->color.c_r, window->color.c_g, window->color.c_b, window->color.c_a);
	SDL_RenderClear(window->rend);
	if (window->animation.timer == 0)
		window->animation.timer = tick;

	else if (tick - window->animation.timer < window->animation.rate)
	{
		;
	}
	else
	{
		window->animation.timer = tick;
		*current = (*current + 1) % 6;
	}
	SDL_RenderCopy(window->rend, window->animation.anim[*current].texture, NULL, &window->animation.anim[*current].rect);
	SDL_RenderPresent(window->rend);
	SDL_Delay(1);
}
