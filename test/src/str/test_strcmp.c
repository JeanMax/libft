/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:35:26 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 22:01:23 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strcmp()
{
	MU_ASSERT(!!ft_strcmp("", "") == !!strcmp("", ""), \
			  "test (%d) and ctrl (%d) differ", !!ft_strcmp("", ""), !!strcmp("", ""));

	MU_ASSERT(!!ft_strcmp("abc", "abc") == !!strcmp("abc", "abc"), \
			  "test (%d) and ctrl (%d) differ", !!ft_strcmp("abc", "abc"), !!strcmp("abc", "abc"));

	MU_ASSERT(!!ft_strcmp("abc", "abd") == !!strcmp("abc", "abd"), \
			  "test (%d) and ctrl (%d) differ", !!ft_strcmp("abc", "abd"), !!strcmp("abc", "abd"));

	MU_ASSERT(!!ft_strcmp("\200", "\0") == !!strcmp("\200", "\0"), \
			  "test (%d) and ctrl (%d) differ", !!ft_strcmp("\200", "\0"), !!strcmp("\200", "\0"));

	MU_ASSERT(!!ft_strcmp("a", "abcde") == !!strcmp("a", "abcde"), \
			  "test (%d) and ctrl (%d) differ", !!ft_strcmp("a", "abcde"), !!strcmp("a", "abcde"));
}
