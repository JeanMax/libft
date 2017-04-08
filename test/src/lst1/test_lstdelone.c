/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:46 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 00:46:51 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static int ____diddel;

static void	del_test(void *data, size_t i)
{
	(void)data;
	(void)i;
	____diddel++;
}

void test_lstdelone()
{
	t_list	*list;
	int		ft;

	____diddel = 0;
	ft = 42;
	list = (t_list *)malloc(sizeof(t_list));
	list->content = &ft;
	list->content_size = sizeof(int);
	ft_lstdelone(&list, del_test);

	MU_ASSERT(!list, "list still there");
	MU_ASSERT(____diddel == 1, "del count wrong");
}
