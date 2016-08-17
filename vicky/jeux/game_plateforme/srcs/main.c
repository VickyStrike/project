/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 18:14:08 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/12 21:30:13 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rabbit.h"

int			main(int ac, char **av)
{
	int		opt;
	int		fscreen;

	opt = ft_get_opt(ac, av, OPT_SET);
	if (IS_OPT(opt, OPT_FSCREEN) == 1)
		fscreen = 1;
	else
		fscreen = 0;
	rb_init();
	rb_game(fscreen);
	rb_quit();
	return (0);
}
