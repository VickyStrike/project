/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:02:46 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 23:54:23 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char			*ft_join(char **tab, char *sep)
{
	int			i;
	int			len;
	int			lenglue;
	char		*str;

	i = -1;
	len = 0;
	lenglue = ft_strlen(sep);
	while (tab[++i] != NULL)
		len += ft_strlen(tab[i]);
	len = len + (lenglue * (i - 1) + 1);
	if ((str = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	i = 0;
	*str = '\0';
	while (tab[i] != NULL)
	{
		if (i != 0)
			ft_strcat(str, sep);
		ft_strcat(str, tab[i]);
		i++;
	}
	return (str);
}
