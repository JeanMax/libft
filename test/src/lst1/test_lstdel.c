/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:52 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 00:46:23 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"


static int ____diddel;

static void del_test(void *data, size_t i)
{
	(void)data;
	(void)i;
	____diddel++;
}

void test_lstdel()
{
	t_list	*list;
	int		ft;

	ft = 42;
	____diddel = 0;

	list = malloc(sizeof(t_list));
	bzero(list, sizeof(t_list));

	list->next = malloc(sizeof(t_list));
	bzero(list->next, sizeof(t_list));

	list->content = &ft;
	list->next->content = (&ft) + 1;

	ft_lstdel(&list, del_test);

	MU_ASSERT(!list, "list still there");
	MU_ASSERT(____diddel == 2, "del count wrong");
}
