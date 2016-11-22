/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 21:08:40 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 22:04:06 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

void		ft_fight(t_perso *att, t_perso *def, float hit)
{
	if (def->life <= 0.0 || att->life <= 0.0)
		return ;
	if (hit != PUNCH && hit != KICK && hit != HEADBUTT)
	{
		ft_putstr(CONNARD);
		return ;
	}
	ft_putstr(att->name);
	ft_putstr(" donne un coup de ");
	if (hit == KICK)
		ft_putstr("pied a ");
	else if (hit == PUNCH)
		ft_putstr("poing a ");
	else if (hit == HEADBUTT)
		ft_putstr("boule a ");
	ft_putstr(def->name);
	ft_putstr(".\n");
	def->life -= hit;
	if (def->life <= 0.0)
	{
		ft_putstr(def->name);
		ft_putstr(" est mort.\n");
	}
	return ;	
}
