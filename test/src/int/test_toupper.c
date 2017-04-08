/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:05:11 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 21:54:58 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_toupper()
{
	int test, ctrl, c;

	for (c = 0; c <= CHAR_MAX; c++) {
		test = ft_toupper(c);
		ctrl = toupper(c);
		MU_ASSERT(test == ctrl, \
				  "test (%d) and ctrl (%d) differ (input: %d)", test, ctrl, c);
	}
}
