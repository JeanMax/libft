/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:16:34 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:12:34 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strncpy()
{
	char	buf[6];

	memset(buf, 33, 6);
	ft_strncpy(buf, "abc", 6);
	MU_ASSERT(!memcmp(buf, "abc\0\0", 6), \
			  "test (%s) and ctrl (%s) differ", buf, "abc\0\0");

	memset(buf, 'z', 6);
	ft_strncpy(buf, "abcdefghi", 6);
	MU_ASSERT(!memcmp(buf, "abcdefghi", 6), \
			  "test (%s) and ctrl (%s) differ", buf, "abcdefghi");
}
