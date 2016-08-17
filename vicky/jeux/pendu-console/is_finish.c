/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_finish.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 18:37:37 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/09 18:57:17 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

int			is_finish(char c, char *str, char **msg, int flag)
{
	int		ret;

	ret = ft_strchr(c, str);
	if (flag == 0)
	{
		if (ret != 0)
		{
			*msg = "Cette lettre a deja ete teste.\n";
			return (1);
		}
	}
	else
	{
		if (ret == 0)
		{
			*msg = "Ce n'est pas la bonne lettre.\n";
			return (1);
		}
	}
	return (0);
}
