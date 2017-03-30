/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:46 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:42:13 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int ____diddel;

static void	del_test(void *data, size_t i)
{
	(void)data;
	(void)i;
	____diddel++;
}

int		test_lstdelone(void)
{
	t_list	*list;
	int		ft;

	intro("lstdelone");

	____diddel = 0;
	ft = 42;
	list = (t_list *)malloc(sizeof(t_list));
	list->content = &ft;
	list->content_size = sizeof(int);
	ft_lstdelone(&list, del_test);

	if (list)
		return (ko_str(__LINE__, "link", "still", "there"));

	if (____diddel != 1)
		return (ko_int(__LINE__, "del count wrong", ____diddel, 1));

	return (ok());
}
