/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:32:08 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:58:21 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strlcat()
{
	char buf[10];
	size_t ret;

	bzero(buf, 10);
	strcpy(buf, "abc");
	ft_strlcat(buf, "abcdefghijklmnop", 10);
	MU_ASSERT(!strcmp(buf, "abcabcdef"),							\
			  "test (%s) and ctrl (%s) differ", buf, "abcabcdef");
	MU_ASSERT((ret = ft_strlcat(buf, "abcd", 2)) == 6,		\
			  "test (%lu) and ctrl (%d) differ", ret, 6);

	bzero(buf, 10);
	MU_ASSERT((ret = ft_strlcat(buf, "abc", 10)) == 3,		\
			  "test (%lu) and ctrl (%d) differ", ret, 3);
	MU_ASSERT((ret = ft_strlcat(buf, "def", 10)) == 6,		\
			  "test (%lu) and ctrl (%d) differ", ret, 6);

	bzero(buf, 10);
	memset(buf, 'a', 10);
	MU_ASSERT((ret = ft_strlcat(buf, "ccc", 10)) == 13,		\
			  "test (%lu) and ctrl (%d) differ", ret, 13);

	bzero(buf, 10);
	strcpy(buf, "abc");
	MU_ASSERT((ret = ft_strlcat(buf, "ccc", 0)) == 3,		\
			  "test (%lu) and ctrl (%d) differ", ret, 3);

	bzero(buf, 10);
	strcpy(buf, "abc");
	MU_ASSERT((ret = ft_strlcat(buf, "ccc", 1)) == 4,		\
			  "test (%lu) and ctrl (%d) differ", ret, 4);

	bzero(buf, 10);
	strcpy(buf, "abc");
	MU_ASSERT((ret = ft_strlcat(buf, "ccc", 6)) == 6,		\
			  "test (%lu) and ctrl (%d) differ", ret, 6);

	bzero(buf, 10);
	strcpy(buf, "abc");
	MU_ASSERT((ret = ft_strlcat(buf, "ccc", 10)) == 6,		\
			  "test (%lu) and ctrl (%d) differ", ret, 6);
}
