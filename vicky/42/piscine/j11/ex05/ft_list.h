/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:27:51 by sbenning          #+#    #+#             */
/*   Updated: 2016/07/25 14:38:04 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_list		t_list;

struct						s_list
{
	t_list					*next;
	void					*data;
};

void						ft_list_push_front(t_list **begin_list, void *data);
void						ft_list_push_back(t_list **begin_list, void *data);

t_list						*ft_create_elem(void *data);

void						ft_putstr_list(t_list *list);

int							ft_list_size(t_list *begin_list);
t_list						*ft_list_last(t_list *begin_list);

#endif
