/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 18:22:32 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/12 18:30:02 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

void			rb_init(void)
{
	int			ret;

	if ((ret = SDL_Init(SDL_INIT_VIDEO)))
	{
		ft_putstr("Erreur lancement : ");
		ft_putstr((char *)SDL_GetError());
		exit(1);
	}
	ft_putstr("Rb_Init = OK\n");
	return ;
}
