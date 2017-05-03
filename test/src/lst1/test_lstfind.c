/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstfind.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 20:11:16 by mc                #+#    #+#             */
/*   Updated: 2017/05/04 00:13:43 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static int cmp_int(const void *a, const void *b, size_t n)
{
	(void)n;
	return ((int)(long)a - (int)(long)b);
}

void test_lstfind(void)
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
	list->content = (void *)(long)1;
	list->content_size = sizeof(int);
	list->next = list2;
	list->next->content = (void *)(long)2;
	list->next->content_size = sizeof(int);
	list->next->next = list3;
	list->next->next->content = (void *)(long)3;
	list->next->next->content_size = sizeof(int);

	MU_ASSERT(ft_lstfind(&list, (void *)(long)1, cmp_int) == list, \
			  "not found - test: %lu ctrl: %lu",					\
			  (size_t)ft_lstfind(&list, (void *)(long)1, cmp_int),	\
			  (size_t)&list);

	MU_ASSERT(ft_lstfind(&list, (void *)(long)2, cmp_int) == list2,	\
			  "not found - test: %lu ctrl: %lu",						\
			  (size_t)ft_lstfind(&list, (void *)(long)2, cmp_int),		\
			  (size_t)&list2);

	MU_ASSERT(ft_lstfind(&list, (void *)(long)3, cmp_int) == list3,	\
			  "not found - test: %lu ctrl: %lu",						\
			  (size_t)ft_lstfind(&list, (void *)(long)3, cmp_int),		\
			  (size_t)&list3);

	MU_ASSERT(ft_lstfind(&list, (void *)(long)4, cmp_int) == NULL,	\
			  "not found - test: %lu ctrl: %lu",					\
			  (size_t)ft_lstfind(&list, (void *)(long)4, cmp_int),	\
			  (size_t)NULL);

	free(list->next->next);
	free(list->next);
	free(list);
}
