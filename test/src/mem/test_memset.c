/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:21:04 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 15:44:47 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memset()
{
    char    s_test[5];
    char    s_ctrl[5];
    char    *ret_ctrl = NULL;
    char    *ret_test = NULL;

    bzero(s_test, 5);
    bzero(s_ctrl, 5);

    ret_ctrl = memset(s_ctrl, 'z', 4);
    ret_test = ft_memset(s_test, 'z', 4);
	MU_ASSERT(!memcmp(s_test, s_ctrl, 5),							\
			  "test (%s) and ctrl (%s) differ", s_test, s_ctrl);
	MU_ASSERT(ret_test == s_test,										\
			  "test return (%lu) and test (%lu) differ", (long)ret_test, (long)s_test);
	MU_ASSERT(!memcmp(ret_test, ret_ctrl, 5),							\
			  "test return (%s) and ctrl return (%s) differ", ret_test, ret_ctrl);


    ret_ctrl = NULL;
    ret_test = NULL;
    ret_ctrl = memset(s_ctrl, 'a', 1 - 1); //gcc throw a warning with n == 0 ...
    ret_test = ft_memset(s_test, 'a', 0);
	MU_ASSERT(!memcmp(s_test, s_ctrl, 5),							\
			  "test (%s) and ctrl (%s) differ", s_test, s_ctrl);
	MU_ASSERT(ret_test == s_test,										\
			  "test return (%lu) and test (%lu) differ", (long)ret_test, (long)s_test);
	MU_ASSERT(!memcmp(ret_test, ret_ctrl, 5),							\
			  "test return (%s) and ctrl return (%s) differ", ret_test, ret_ctrl);
}
