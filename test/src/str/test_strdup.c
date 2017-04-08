/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:48:48 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:41:00 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strdup()
{
	char	*test;
	char	*ctrl;

	ctrl = strdup("test_strdup");
	test = ft_strdup("test_strdup");
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	if (ctrl) {
		free(ctrl);
	}
	if (test) {
		free(test);
	}

	ctrl = strdup("");
	test = ft_strdup("");
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	if (ctrl) {
		free(ctrl);
	}
	if (test) {
		free(test);
	}
}
