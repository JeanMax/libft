/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:52 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:37:35 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


static int ____diddel;

static void del_test(void *data, size_t i)
{
	(void)data;
	(void)i;
	____diddel++;
}


int		test_lstdel(void)
{

	t_list	*list;
	int		ft;

	intro("lstdel");

	ft = 42;
	____diddel = 0;

	list = malloc(sizeof(t_list));
	bzero(list, sizeof(t_list));

	list->next = malloc(sizeof(t_list));
	bzero(list->next, sizeof(t_list));

	list->content = &ft;
	list->next->content = (&ft) + 1;

	ft_lstdel(&list, del_test);

	if (list)
		return (ko_str(__LINE__, "list", "still", "there"));

	if (____diddel != 2)
		return (ko_int(__LINE__, "del count wrong", ____diddel, 2));

	return (ok());
}
