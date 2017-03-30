/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:36 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:28:07 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_lstadd(void)
{
	t_list	*list;
	t_list	*list2;

	intro("lstadd");

	list = malloc(sizeof(t_list));
	list2 = malloc(sizeof(t_list));
	bzero(list, sizeof(t_list));
	bzero(list2, sizeof(t_list));
	ft_lstadd(&list2, list);
	if (list != list2 || !list->next)
		return (ko_str(__LINE__, "add 2 1", "1 not first", ":/"));
	free(list->next);
	free(list);

	return (ok());
}
