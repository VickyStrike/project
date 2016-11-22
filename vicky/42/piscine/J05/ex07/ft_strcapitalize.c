/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 23:52:04 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/14 00:26:21 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int		ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z')\
			|| (c >= 'A' && c <= 'Z')\
				|| (c >= '0' && c <= '9'))
	{
		return (42);
	}
	return (0);
}

static int		ft_wcapitalize(char *str)
{
	int		i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (ft_isalnum(str[i]) != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalnum(str[i]) != 0)
		{
			len = ft_wcapitalize(str + i);
			i = i + len;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
