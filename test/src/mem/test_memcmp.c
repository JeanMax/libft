/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:47:07 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/28 20:27:27 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_test.h"

void test_memcmp()
{
	char	str1[]="test string",
			str2[]="test spring";

	MU_ASSERT(ft_memcmp(str1, str2, 12) == memcmp(str1, str2, 12), \
			  "test (%d) and ctrl (%d) differ", ft_memcmp(str1, str2, 12), memcmp(str1, str2, 12));

	MU_ASSERT(ft_memcmp(str1, str2, 6) == memcmp(str1, str2, 6),	\
			  "test (%d) and ctrl (%d) differ", ft_memcmp(str1, str2, 6), memcmp(str1, str2, 6));

	MU_ASSERT(ft_memcmp("a", "b", 0) == memcmp("a", "b", 0), \
			  "test (%d) and ctrl (%d) differ", ft_memcmp("a", "b", 0), memcmp("a", "b", 0));

	str1[1] = '\0';
	str2[1] = '\0';
	str1[2] = 'a';
	str2[2] = 'b';
	MU_ASSERT(ft_memcmp(str1, str2, 3) == memcmp(str1, str2, 3), \
			  "test (%d) and ctrl (%d) differ", ft_memcmp(str1, str2, 3), memcmp(str1, str2, 3));

	//TODO: weird behaviour with that test...
	/* MU_ASSERT(ft_memcmp("\200", "\0", 1) == memcmp("\200", "\0", 1), \ */
			  /* "test (%d) and ctrl (%d) differ", ft_memcmp("\200", "\0", 1), memcmp("\200", "\0", 1)); */
}
