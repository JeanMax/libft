/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_iscntrl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:38:59 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 16:47:55 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_iscntrl()
{
	int test, ctrl, c;

	for (c = 0; c <= CHAR_MAX; c++) {
		test = ft_iscntrl(c);
		ctrl = iscntrl(c);
		MU_ASSERT(test >= 0, "return is negative, (input: %d)", c);
		MU_ASSERT((test && ctrl) || (!test && !ctrl), \
				  "test (%d) and ctrl (%d) differ (input: %d)", test, ctrl, c);
	}
}
