/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strndup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:48:48 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 17:29:01 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strndup()
{
	char	*test;
	char	*ctrl;

	ctrl = strndup("test_strndup", 6);
	test = ft_strndup("test_strndup", 6);
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	free(ctrl);
	free(test);

	ctrl = strndup("", 42);
	test = ft_strndup("", 42);
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	free(ctrl);
	free(test);

	ctrl = strndup("toto", 42);
	test = ft_strndup("toto", 42);
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	free(ctrl);
	free(test);

	ctrl = strndup("toto", 4);
	test = ft_strndup("toto", 4);
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	free(ctrl);
	free(test);
}
