/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 12:36:39 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/17 13:11:53 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <limits.h>
void	ft_putnbr(int nb);
void	ft_putchar(char c);

int main()
{
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	return (0);
}
