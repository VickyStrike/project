/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 13:54:48 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/16 14:01:47 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
