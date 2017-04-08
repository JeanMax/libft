/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:59 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 00:48:34 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	lstiter_test(t_list *ppp)
{
	ppp->content_size = 42;
}

void test_lstiter()
{
	t_list *list;

	bzero((list = malloc(sizeof(t_list))), sizeof(t_list));
	bzero(((list->next) = malloc(sizeof(t_list))), sizeof(t_list));
	ft_lstiter(list, lstiter_test);

	MU_ASSERT(list->content_size == 42, "first link not updated");
	MU_ASSERT(list->next->content_size == 42, "second link not updated");

	free(list->next);
	free(list);
}
