/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_victory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 17:59:08 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/11 13:41:48 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

void				put_victory(char *hidden_word, int hit)
{
	char			*str[] = {"\n                          \n                       \\O/\n                        V\n                       / \\\n\n",\
					"\n                          \n                      __0__\n                      __V__\n\n"};
	int				i;
//	struct timespec	delay;

	i = 0;
	if (!hit)
	{
		system("clear");
		draw_pendu(hit);
		ft_putstr(PENDU_MSG);
		ft_putstr("Le mot etait ");
		ft_putstr(hidden_word);
		ft_putchar('\n');
		sleep(2);
		return ;
	}
	while (i < 5)
	{
		system("clear");
		ft_putstr(str[i % 2]);
		ft_putstr(GAGNE_MSG);
		ft_putchar('\n');
		i++;
		sleep(1);
	}
}
