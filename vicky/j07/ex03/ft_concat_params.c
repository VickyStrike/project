/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 18:22:04 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/20 18:47:59 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char		*ft_strcat(char *dest, char *src)
{
	int			i;
	int			len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char			*ft_concat_params(int argc, char **argv)
{
	int			size;
	int			i;
	char		*str;

	size = 0;
	i = 0;	
	while (++i < argc)
		size = ft_strlen(argv[i]) + size + 1;
	if (size == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i != argc - 1)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
