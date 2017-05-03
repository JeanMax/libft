/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdellink.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:11:19 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 20:35:30 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstdellink(void)
{
	t_list	*list;
	t_list	*list2;
	t_list	*list3;

	list = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	list3 = malloc(sizeof(t_list));

	bzero(list, sizeof(t_list));
	bzero(list2, sizeof(t_list));
	bzero(list3, sizeof(t_list));

	list->next = list2;
	list2->next = list3;

	ft_lstdellink(&list, list2);

	MU_ASSERT(!list2->next, "removed link->next still point to something");
	MU_ASSERT(list->next == list3, "link not removed");

	free(list2);
	free(list->next);
	free(list);
}
