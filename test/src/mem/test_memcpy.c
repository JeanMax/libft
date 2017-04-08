/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:06:29 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 15:34:29 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memcpy()
{
    char    ctrl[] = "test\0memcpy";
    char    test[12];
    char    *ret = NULL;

    strcpy(test, "memcpy_test");
    ret = ft_memcpy(test, ctrl, 12);
	MU_ASSERT(!memcmp(ctrl, test, 12), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
    MU_ASSERT(ret == test, \
			  "test return (%lu) and test (%lu) differ", (long)ret, (long)test);
    MU_ASSERT(!memcmp(test, ret, 12),									\
			  "test return (%s) and test (%s) differ", ret, test);

    strcpy(test, "memcpy_test");
    ret = ft_memcpy(test, ctrl, 0);
	MU_ASSERT(!memcmp(ctrl, test, 0), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
    MU_ASSERT(ret == test, \
			  "test return (%lu) and test (%lu) differ", (long)ret, (long)test);
    MU_ASSERT(!memcmp(test, ret, 12),									\
			  "test return (%s) and test (%s) differ", ret, test);
}
