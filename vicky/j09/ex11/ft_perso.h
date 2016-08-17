/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 19:07:50 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/22 19:19:37 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_THE_WORLD 'a'

# include <string.h> 

typedef struct		s_perso
{
	char *name;
	float life;
	int age;
	char profession;
}					t_perso;

#endif
