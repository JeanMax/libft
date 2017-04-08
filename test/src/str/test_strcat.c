/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:25:50 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 18:22:29 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strcat()
{
    char    src[] = "test_strcat";
    char    test[42];
    char    ctrl[42];
    char    *ret = NULL;

    bzero(test, 42);
    bzero(ctrl, 5);
    ret = ft_strcat(test, src);
	MU_ASSERT(!strcmp(test, strcat(ctrl, src)), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	MU_ASSERT(ret == test, \
			  "test return (%lu) and test (%lu) differ", (long)ret, (long)test);
	MU_ASSERT(!strcmp(test, ret),								\
			  "test return (%s) and test (%s) differ", ret, test);

    bzero(test, 20);
    bzero(ctrl, 20);
    strcpy(test, "toto");
    strcpy(ctrl, "toto");
    ret = ft_strcat(test, src);
	MU_ASSERT(!strcmp(test, strcat(ctrl, src)), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
	MU_ASSERT(ret == test, \
			  "test return (%lu) and test (%lu) differ", (long)ret, (long)test);
	MU_ASSERT(!strcmp(test, ret),								\
			  "test return (%s) and test (%s) differ", ret, test);
}
