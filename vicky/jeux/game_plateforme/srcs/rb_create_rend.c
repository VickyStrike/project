/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_create_rend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:31:56 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/14 11:56:25 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

int			rb_create_rend(t_window *window)
{
	if (!(window->rend = SDL_CreateRenderer(window->window, -1, SDL_RENDERER_ACCELERATED)))
	{
		ft_putstr("Erreur : ");
		ft_putstr((char *)SDL_GetError);
		SDL_DestroyWindow(window->window);
		return (-1);
	}
	return (0);
}
