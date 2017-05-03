/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstrplc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:11:19 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 22:16:28 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstrplc(void)
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

	ft_lstrplc(&list, list2, list3);
	MU_ASSERT(list2->next == NULL, "link not replaced");
	MU_ASSERT(list->next == list3, "link not replaced");
	MU_ASSERT(list3->next == NULL, "link not replaced");

	free(list->next);
	free(list);
	free(list2);
}
