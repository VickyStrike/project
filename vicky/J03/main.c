/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 13:14:06 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/17 13:43:53 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main()
{
	int		a = 43;
	int		b = 6;
	int		div;
	int		*mod;


	ft_div_mod(a, b, &div, mod);
	printf("div = %d\nmod = %d\n", div, mod);

	return (0);
}
