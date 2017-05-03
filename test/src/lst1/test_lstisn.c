/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstisn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:11:17 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 20:41:28 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstisn(void)
{
	t_list	*list;
	t_list	*list2;

	list = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	bzero(list, sizeof(t_list));
	bzero(list2, sizeof(t_list));
	list->next = list2;

	MU_ASSERT(ft_lstisn(list, list) == 1, \
			  "wrong link index - test: %lu", \
			  ft_lstisn(list, list));

	MU_ASSERT(ft_lstisn(list, list2) == 2, \
			  "wrong link index - test: %lu", \
			  ft_lstisn(list, list2));

	free(list->next);
	free(list);
}
