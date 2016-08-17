/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 14:39:14 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/10 13:53:33 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

char		*ft_concat(t_list *list, int len)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[0] = '\0';
	while (list != NULL)
	{
		ft_strcat(str, (char *)list->data);
		list = list->next;
	}
	return (str);
}
