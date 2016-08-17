/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 21:33:15 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/21 21:57:27 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 AM AND 1.00 AM\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 PM AND 12.00 AM\n");
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 AM AND 12.00 PM\n");
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 PM AND 1.00 PM\n");
	else if (hour < 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 AM AND %d.00 AM\n", hour, hour + 1);
	else
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 PM AND %d.00 PM\n", hour - 12, (hour + 1) - 12);
	return ;
}
