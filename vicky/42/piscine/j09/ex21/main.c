/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:12:55 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/23 12:57:07 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"

int				main(void)
{
	t_perso		n_b;
	t_perso		ana;

	n_b.name = "Nicolas Bauer";
	ana.name = "Anastacia";
	n_b.life = 40.0;
	ana.life = 100.0;
	ft_ultimate_fight(&ana, &n_b, KICK);
	ft_ultimate_fight(&n_b, &ana, HEADBUTT);
	ft_ultimate_fight(&ana, &ana, HEADBUTT);
	ft_ultimate_fight(&ana, &n_b, KICK12);
	ft_ultimate_fight(&ana, &n_b, KICK1);
	printf("nb life = %f\n", n_b.life);
	ft_ultimate_fight(&ana, &n_b, KICK7);
	printf("nb life = %f\n", n_b.life);
	ft_ultimate_fight(&ana, &n_b, KICK10);
	ft_ultimate_fight(&ana, &n_b, 17);
	return (0);
}
