/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_letter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 14:20:06 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/09 14:24:13 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

void		set_letter(char c, char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == c)
			dest[i] = c;
		i++;
	}
	return ;
}
