/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:19:59 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:57:23 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"


void	lstiter_test(t_list *ppp)
{
	ppp->content_size = 42;
}

int		test_lstiter(void)
{
	intro("lstiter");


	t_list*list;

	bzero((list = malloc(sizeof(t_list))), sizeof(t_list));
	bzero(((list->next) = malloc(sizeof(t_list))), sizeof(t_list));
	ft_lstiter(list, lstiter_test);

	if (list->content_size != 42)
		return (ko_int(__LINE__, "f(l)->l.content_size=42", \
					   list->content_size, 42));
	if (list->next->content_size != 42)
		return (ko_int(__LINE__, "f(l)->l.content_size=42", \
					   list->next->content_size, 42));

	free(list->next);
	free(list);

	return (ok());
}
