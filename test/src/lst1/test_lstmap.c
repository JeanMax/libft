/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:53 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 00:53:49 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

t_list	*lstmap_test_fn(t_list *list)
{
	static t_list swap;
	static char s[] = "dohdohdoh";

	(void)list;
	swap.content = s;
	swap.content_size = sizeof(char *);
	return (&swap);
}

void test_lstmap()
{
	t_list	*list;
	t_list	*map;

	bzero((list = malloc(sizeof(t_list))), sizeof(t_list));
	bzero((list->next = malloc(sizeof(t_list))), sizeof(t_list));
	list->content_size = 21;
	list->next->content_size = 100;
	map = ft_lstmap(list, lstmap_test_fn);

	MU_ASSERT(list->content_size == 21, \
			  "head of base list modified");
	MU_ASSERT(list->next->content_size == 100, \
			  "tail of base list modified");

	MU_ASSERT_FATAL(map, "head of map not created");
	MU_ASSERT_FATAL(map->next, "tail of map not created");

	MU_ASSERT(map->content_size == sizeof(char *),	\
			  "head of map list not updated");
	MU_ASSERT(map->next->content_size == sizeof(char *), \
			  "tail of map list not updated");

	free(list->next);
	free(list);

	/* free(map->next->content); */
	free(map->next);
	/* free(map->content); */
	free(map);
}
