/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 16:31:03 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 17:23:13 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_strdelspace(char *str)
{
	str = ft_strdelspace_a(str);
	ft_strdelspace_p(str);
	return (str);
}
