/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenning <sbenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 13:38:52 by sbenning          #+#    #+#             */
/*   Updated: 2016/08/10 14:19:11 by sbenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_file_to_str(char *path)
{
	int		len;
	int		ret;
	int		fd;
	char	*content;
	t_list	*list;
	char	str[BUFF_SIZE + 1];

	len = 0;
	if ((fd = open(path, O_RDONLY)) < 0)
		return (NULL);
	list = NULL;
	while ((ret = read(fd, str, BUFF_SIZE)))
	{
		if (ret < 0)
		{
			ft_mlist_clear(&list);
			close(fd);
			return (NULL);
		}
		str[ret] = '\0';
		ft_mlist_push_back(&list, str);
		len = len + ret;
	}
	content = ft_concat(list, len);
	close(fd);
	ft_mlist_clear(&list);
	return (content);
}
