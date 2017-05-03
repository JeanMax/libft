/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstinser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:11:12 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 22:13:45 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstinser(void)
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
	list->next = list3;

	ft_lstinser(&list, list2);
	MU_ASSERT(list->next == list2, "link not inserted");
	MU_ASSERT(list2->next == list3, "link not inserted");
	MU_ASSERT(list3->next == NULL, "link not inserted");

	free(list->next->next);
	free(list->next);
	free(list);
}
