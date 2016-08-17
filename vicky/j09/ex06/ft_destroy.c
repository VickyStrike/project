/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 13:06:49 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 13:43:06 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

static char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void		ft_destroy(char ***factory)
{
	int		i;

	i = 0;
	while ((*factory)[i] != NULL)
	{
		free((*factory)[i]);
		(*factory)[i] = NULL;
		i++;
	}
	free((*factory)[i]);
	(*factory)[i] = NULL;
	free(*factory);
	*factory = NULL;
	return ;
}

int			main(int ac, char **av)
{
	char	**cpy;
	int		i;

	if ((cpy = (char **)malloc(sizeof(char *) * (ac + 1))) == NULL)
		return (printf("Erreur malloc\n"));
	cpy[ac] = NULL;
	i = 0;
	while (i < ac)
	{
		if ((cpy[i] = ft_strdup(av[i])) == NULL)
			return (printf("Erreur malloc\n"));
		i++;
	}
	i = 0;
	while (cpy[i] != NULL)
	{
		printf("%s\n", cpy[i]);
		i++;
	}
	ft_destroy(&cpy);
	printf("%p\n", cpy);
	return (0);	
}
