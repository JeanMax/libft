/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstaddlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:11:20 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 22:06:47 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstaddlast(void)
{
	t_list	*list;
	t_list	*list2;

	list = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	bzero(list, sizeof(t_list));
	bzero(list2, sizeof(t_list));
	ft_lstaddlast(&list2, list);

	MU_ASSERT(list != list2, "head of the list updated");
	MU_ASSERT(list2->next == list, "head doesn't point to tail");
	MU_ASSERT(list->next == NULL, "tail->next non NULL");

	free(list2->next);
	free(list2);
}
