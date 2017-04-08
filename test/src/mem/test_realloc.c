/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_realloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:18:43 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 19:49:43 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_realloc()
{
	char *test;

	test = strdup("testux");
	test = ft_realloc(test, strlen(test), strlen(test) + 5);
	strcat(test, "toto");
	MU_ASSERT(!strcmp(test, "testuxtoto"), \
			  "test (%s) wasn't reallocated correctly", test);
	free(test);

	test = strdup("testux");
	test = ft_realloc(test, strlen(test), strlen(test) - 2);
	MU_ASSERT(!memcmp(test, "test", 4),							\
			  "test (%s) wasn't reallocated correctly", test);
	free(test);
}
