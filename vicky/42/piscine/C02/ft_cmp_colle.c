/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:28:19 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 22:04:27 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

int				ft_cmp_colle00(int *coord, char *src)
{
	char		*str;
	int			nb;

	if (!(str = (char *)malloc(sizeof(char)\
					* (((coord[0] + 1) * coord[1]) + 1))))
		return (-1);
	ft_colle00(coord, str);
	str[(coord[0] + 1) * coord[1]] = '\0';
	nb = ft_strcmp(str, src);
	free(str);
	str = NULL;
	return (nb);
}

int				ft_cmp_colle01(int *coord, char *src)
{
	char		*str;
	int			nb;

	if (!(str = (char *)malloc(sizeof(char) * (((coord[0] + 1) * coord[1]) + 1))))
		return (-1);
	ft_colle01(coord, str);
	str[(coord[0] + 1) * coord[1]] = '\0';
	nb = ft_strcmp(str, src);
	free(str);
	str = NULL;
	return (nb);
}

int				ft_cmp_colle02(int *coord, char *src)
{
	char		*str;
	int			nb;

	if (!(str = (char *)malloc(sizeof(char) * (((coord[0] + 1) * coord[1]) + 1))))
		return (-1);
	ft_colle02(coord, str);
	str[(coord[0] + 1) * coord[1]] = '\0';
	nb = ft_strcmp(str, src);
	free(str);
	str = NULL;
	return (nb);
}

int				ft_cmp_colle03(int *coord, char *src)
{
	char		*str;
	int			nb;

	if (!(str = (char *)malloc(sizeof(char) * (((coord[0] + 1) * coord[1]) + 1))))
		return (-1);
	ft_colle03(coord, str);
	str[(coord[0] + 1) * coord[1]] = '\0';
	nb = ft_strcmp(str, src);
	free(str);
	str = NULL;
	return (nb);
}

int				ft_cmp_colle04(int *coord, char *src)
{
	char		*str;
	int			nb;

	if (!(str = (char *)malloc(sizeof(char) * (((coord[0] + 1) * coord[1]) + 1))))
		return (-1);
	ft_colle04(coord, str);
	str[(coord[0] + 1) * coord[1]] = '\0';
	nb = ft_strcmp(str, src);
	free(str);
	str = NULL;
	return (nb);
}
