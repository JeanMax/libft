/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:05:19 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 21:55:20 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_tolower()
{
	int test, ctrl, c;

	for (c = 0; c <= CHAR_MAX; c++) {
		test = ft_tolower(c);
		ctrl = tolower(c);
		MU_ASSERT(test == ctrl, \
				  "test (%d) and ctrl (%d) differ (input: %d)", test, ctrl, c);
	}
}
