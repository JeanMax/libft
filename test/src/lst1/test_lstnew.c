/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:49 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 01:23:28 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_lstnew()
{
	t_list	*list;

	list = ft_lstnew((void *)42, sizeof(int));

	MU_ASSERT_FATAL(list, \
					"link not created");

	MU_ASSERT((long)list->content == 42, \
			  "invalid content (%lu)", (long)list->content);
	/* free(list->content); */
	free(list);

	list = ft_lstnew(NULL, 386);
	MU_ASSERT(!list->content_size, \
			  "invalid content_size (%lu)", list->content_size);
	/* free(list->content); */
	free(list);
}
