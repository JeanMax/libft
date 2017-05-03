/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:21:13 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 20:47:55 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstat(void)
{
	t_list	*list;
	t_list	*list2;

	list = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	bzero(list, sizeof(t_list));
	bzero(list2, sizeof(t_list));
	list->next = list2;

	MU_ASSERT(ft_lstat(list, 1) == list, \
			  "wrong link index - test: %lu ctrl: %lu", \
			  (size_t)(ft_lstat(list, 1)), (size_t)list);

	MU_ASSERT(ft_lstat(list, 2) == list2, \
			  "wrong link index - test: %lu ctrl: %lu", \
			  (size_t)(ft_lstat(list, 2)), (size_t)list2);

	MU_ASSERT(!ft_lstat(list, 3), \
			  "wrong link index - test: %lu ctrl: %lu", \
			  (size_t)(ft_lstat(list, 2)), (size_t)NULL);

	free(list->next);
	free(list);
}
