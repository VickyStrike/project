/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ask_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 15:10:14 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 21:38:06 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

char			*ask_word(t_player *player)
{
	char		str[BUFF_SIZE + 1];
	int			ret;

	ft_putstr("\n\n");
	ft_putstr(player->name);
	ft_putstr("\nEntrez un mot s'il vous plait (sans caracteres specials ni accents) : ");
	if ((ret = read(0, str, BUFF_SIZE)) < 0)
		return (NULL);
	str[ret] = '\0';
	return (ft_strdup(str));
}
