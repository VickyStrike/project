/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ask_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 21:11:54 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 21:55:04 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

void			ask_name(char *player, int nb)
{
	int			ret;
	char		name[BUFF_NAME + 1];

	system("clear");
	ft_putstr("Joueur ");
	ft_putnbr(nb);
	ft_putstr(" entrez votre nom : ");
	if ((ret = read(0, name, BUFF_NAME)) < 0)
		return ;
	if (ret < 2)
		return ;
	name[ret - 1] = '\0';
	if (name[ret - 2] != '0')
		ft_strcpy(player, "NaTaShA  tTe");
	else
	{
		name[ret - 2] = '\0';
		ft_strcpy(player, name);
	}
	return ;
}
