/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 14:00:11 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 15:09:10 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

void		put_msg(char *cpy, char *tested_letters, char *msg)
{
	ft_putstr("\n\n\t");
	ft_putstr(cpy);
	ft_putstr("\n\n");
	if (msg)
		ft_putstr(msg);
	ft_putstr("Les coups deja testes sont : [");
	ft_putstr(tested_letters);
	ft_putstr("] .\n");
	ft_putchar('\n');
	ft_putstr("Tapez une lettre : ");
	return ;
}
