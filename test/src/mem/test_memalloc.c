/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:50 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 02:15:48 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memalloc()
{
	void *test;
	void *ctrl;

	test = ft_memalloc(512);
	MU_ASSERT(test, "return is NULL");

	if (test) {
		if ((ctrl = malloc(512))) {
			bzero(ctrl, 512);
			MU_ASSERT(!memcmp(test, ctrl, 512), "test isn't bzero'ed");
			free(ctrl);
		}
		free(test);
	}

/*
	ctrl = malloc(ULONG_MAX);
	test = ft_memalloc(ULONG_MAX);
	if ((test && !ctrl) || (!test && ctrl))
		return (ko_str(__LINE__, "512: memcmp diff", "42", "42"));
	ctrl ? free(ctrl) : (void)0;
	test ? free(test) : (void)0;
*/
}
