/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:54:01 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:04:17 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_itoa()
{
	char *test = NULL;
	char *ctrl[] =   {"0", "21", "123", "-123", "-2147483648", "2147483647"};
	int   ctrl_i[] = { 0,   21,   123,   -123,   -2147483648,   2147483647};
	int   i;

	for (i = 0; i < (int)(sizeof(ctrl_i) / sizeof(int)); i++) {
		test = ft_itoa(ctrl_i[i]);
		MU_ASSERT(!strcmp(test, ctrl[i]), \
				  "test (%s) and ctrl (%s) differ (input: %d)", test, ctrl[i], ctrl_i[i]);
		if (test)
			free(test);
		test = NULL;
	}
}
