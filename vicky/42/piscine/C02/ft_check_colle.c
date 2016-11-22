/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_colle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:24:37 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/29 22:04:27 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle.h"

void		ft_check_colle(char *str, int *x_y, int *check)
{
	check[0] = ft_cmp_colle00(x_y, str);
	check[1] = ft_cmp_colle01(x_y, str);
	check[2] = ft_cmp_colle02(x_y, str);
	check[3] = ft_cmp_colle03(x_y, str);
	check[4] = ft_cmp_colle04(x_y, str);
	return ;
}
