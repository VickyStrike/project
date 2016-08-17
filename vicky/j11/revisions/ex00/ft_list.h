/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 13:22:55 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/26 15:27:01 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include "ft.h"

typedef struct s_list		t_list;

struct						s_list
{
	void					*data;
	t_list					*next;
};

t_list						*ft_create_elem(void *data);
void						ft_list_push_back(t_list **begin_list, void *data);
void						ft_list_push_front(t_list **begin_list, vooid *data);

#endif
