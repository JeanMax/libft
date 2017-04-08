/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:50:45 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 15:55:00 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memchr()
{
	char	s1[] = "test\200string";

	MU_ASSERT(memchr(s1, 'a', 12) == ft_memchr(s1, 'a', 12), \
			  "test (%s) and ctrl (%s) differ", (char *)ft_memchr(s1, 'a', 12), (char *)memchr(s1, 'a', 12));

	MU_ASSERT(memchr(s1, '\200', 12) == ft_memchr(s1, '\200', 12), \
			  "test (%s) and ctrl (%s) differ", (char *)ft_memchr(s1, '\200', 12), (char *)memchr(s1, '\200', 12));

	MU_ASSERT(memchr(s1, 'g', 10) == ft_memchr(s1, 'g', 10), \
			  "test (%s) and ctrl (%s) differ", (char *)ft_memchr(s1, 'g', 10), (char *)memchr(s1, 'g', 10));

	MU_ASSERT(memchr(s1, 'g', 11) == ft_memchr(s1, 'g', 11), \
			  "test (%s) and ctrl (%s) differ", (char *)ft_memchr(s1, 'g', 11), (char *)memchr(s1, 'g', 11));
}
