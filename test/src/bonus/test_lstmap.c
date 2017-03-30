/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:53 by mcanal            #+#    #+#             */
/*   Updated: 2016/03/18 15:29:29 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*lstmap_test_fn(t_list *list)
{
	static t_list swap;
	static char s[] = "dohdohdoh";

	(void)list;
	swap.content = s;
	swap.content_size = sizeof(char *);
	return (&swap);
}

int		test_lstmap(void)
{
	t_list	*list;
	t_list	*map;

	intro("lstmap");

	bzero((list = malloc(sizeof(t_list))), sizeof(t_list));
	bzero((list->next = malloc(sizeof(t_list))), sizeof(t_list));
	list->content_size = 21;
	list->next->content_size = 100;
	map = ft_lstmap(list, lstmap_test_fn);

	if (list->content_size != 21)
		return (ko_int(__LINE__, "21, =str (base)",\
						list->content_size, 21));
	if (list->next->content_size != 100)
		return (ko_int(__LINE__, "100, =str (base)",\
						list->next->content_size, 100));
	if (map && map->content_size != sizeof(char *))
		return (ko_int(__LINE__, "21, =str (map)",\
						map->content_size, 42));
	if (map && map->next->content_size != sizeof(char *))
		return (ko_int(__LINE__, "100, =str (map)",\
						map->next->content_size, 200));

	free(list->next);
	free(list);

	/* free(map->next->content); */
	free(map->next);
	/* free(map->content); */
	free(map);

	return (ok());
}
