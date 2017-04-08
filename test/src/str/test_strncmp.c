/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:04:20 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/07 02:05:03 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strncmp()
{
	MU_ASSERT(!!ft_strncmp("abc", "abcde", 3) == !!strncmp("abc", "abcde", 3), \
			  "test (%d) and ctrl (%d) differ", !!ft_strncmp("abc", "abcde", 3), !!strncmp("abc", "abcde", 3));

	MU_ASSERT(!!ft_strncmp("\200", "\0", 1) == !!strncmp("\200", "\0", 1),	\
			  "test (%d) and ctrl (%d) differ", !!ft_strncmp("\200", "\0", 1), !!strncmp("\200", "\0", 1));

	MU_ASSERT(!!ft_strncmp("abc", "abc\0defg", 100) == !!strncmp("abc", "abc\0defg", 100),	\
			  "test (%d) and ctrl (%d) differ", !!ft_strncmp("abc", "abc\0defg", 100), !!strncmp("abc", "abc\0defg", 100));

	MU_ASSERT(!!ft_strncmp("ab\0cde", "abcc\0e", 20) == !!strncmp("ab\0cde", "abcc\0e", 20), \
			  "test (%d) and ctrl (%d) differ", !!ft_strncmp("ab\0cde", "abcc\0e", 20), !!strncmp("ab\0cde", "abcc\0e", 20));

}
