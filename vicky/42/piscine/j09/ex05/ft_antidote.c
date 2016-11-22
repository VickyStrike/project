/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 12:11:54 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 12:37:03 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i == j && j == k)
		return (i);
	if (i == j || i == k)
		return (i);
	if (j == k)
		return (j);
	if ((i < j && i > k) || (i > j && i < k))
		return (i);
	if ((j < i && j > k) || (j > i && j < k))
		return (j);
	else
		return (k);
}
