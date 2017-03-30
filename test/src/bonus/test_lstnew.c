/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:49 by mcanal            #+#    #+#             */
/*   Updated: 2016/03/18 15:35:00 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_lstnew(void)
{
	t_list	*list;

	intro("lstnew");

	list = ft_lstnew((void *)42, sizeof(int));
	if (!list)
		return (ko_str(__LINE__, "ptr", "empty", "NULL"));
	if ((int)list->content != 42)
		return (ko_int(__LINE__, "42", (int)list->content, 42));
	/* free(list->content); */
	free(list);

	list = ft_lstnew(NULL, 386);
	if ((list->content_size) != 0)
		return (ko_int(__LINE__, "null 386", (*(int*)(list->content_size)), 0));
	/* free(list->content); */
	free(list);

	return (ok());
}
