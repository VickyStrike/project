/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:12:55 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 22:05:52 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

int				main(void)
{
	t_perso		n_b;
	t_perso		ana;

	n_b.name = "Nicolas Bauer";
	ana.name = "Anastacia";
	n_b.life = 30.0;
	ana.life = 30.0;
	ft_fight(&ana, &n_b, KICK);
	ft_fight(&n_b, &ana, HEADBUTT);
	ft_fight(&ana, &ana, HEADBUTT);
	return (0);
}
