/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_letter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 12:28:35 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/10 14:45:28 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pendu.h"

char		get_letter(void)
{
	int		ret;
	char	buff[5 + 1];
	char	c;

	ret = 1;
	ft_raw_term();
	c = '\0';
	while (ret > 0)
	{
		ft_bzero(buff, 6);
		ret = read(0, buff, 5);
		if (ret < 0)
			return ('\0');
		if (*(int *)buff == 0x1b)
		{
			ft_putstr("\nEXIT\n");
			ft_reset_term();
			exit(0);
		}
		if (ret != 1)
			continue ;
		buff[ret] = '\0';
		if (buff[0] == '\n' && c != '\0')
			break ;
		else if (buff[0] == '\n')
			continue ;
		c = ((buff[0] >= 'a' && buff[0] <= 'z') ? buff[0] - 32 : buff[0]);
		if (c < 'A' || c > 'Z')
		{
			c = '\0';
			continue ;
		}
		ft_putchar(c);
		ft_putchar('\b');
	}
	ft_putchar(c);
	ft_putchar('\n');
	ft_reset_term();
	return (c);
}
