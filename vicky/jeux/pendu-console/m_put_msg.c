/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_put_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 15:05:54 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 21:26:58 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

void		m_put_msg(char *cpy, char *tested_letters, char *msg, t_party *party)
{
	ft_putstr("Score ");
	ft_putstr(party->player_1.name);
	ft_putstr(" : ");
	ft_putnbr(party->player_1.score);
	ft_putstr("\nScore ");
	ft_putstr(party->player_2.name);
	ft_putstr(" : ");
	ft_putnbr(party->player_2.score);
	ft_putstr("\n\n\n\t");
	ft_putstr(cpy);
	ft_putstr("\n\n");
	if (msg)
		ft_putstr(msg);
	ft_putstr("Les coups deja testes sont : [");
	ft_putstr(tested_letters);
	ft_putstr("] .\n");
	ft_putchar('\n');
	ft_putstr(party->demandeur->name);
	ft_putstr(" tapez une lettre : ");
	return ;
}
