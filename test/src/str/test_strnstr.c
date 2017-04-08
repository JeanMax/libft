/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:22:00 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:35:44 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strnstr()
{
	char	buf[11];
	char	*ret;

	bzero(buf, 11);
	strcpy(buf, "un deux 9");
	MU_ASSERT(!strcmp(ft_strnstr(buf, "deux", 10), "deux 9"), \
			  "test (%s) and ctrl (%s) differ", ft_strnstr(buf, "deux", 10), "deux 9");
	MU_ASSERT(!(ret = ft_strnstr(buf, "9", 3)), \
			  "test return (%s) should be NULL", ret);
	MU_ASSERT(!strcmp(ft_strnstr(buf, "", 6), buf), \
			  "test (%s) and ctrl (%s) differ", ft_strnstr(buf, "", 6), buf);
	MU_ASSERT(!(ret = ft_strnstr(buf, "un deux", 5)), \
			  "test return (%s) should be NULL", ret);
	MU_ASSERT(!strcmp(ft_strnstr(buf, "9", 10), "9"), \
			  "test (%s) and ctrl (%s) differ", ft_strnstr(buf, "9", 10), "9");
	MU_ASSERT(!(ret = ft_strnstr(buf, "9", 8)), \
			  "test return (%s) should be NULL", ret);

	bzero(buf, 11);
	strcpy(buf, "un deux 96");
	MU_ASSERT(!strcmp(ft_strnstr(buf, "deux", 10), "deux 96"), \
			  "test (%s) and ctrl (%s) differ", ft_strnstr(buf, "deux", 10), "deux 96");
	MU_ASSERT(!(ret = ft_strnstr(buf, "cinq", 10)), \
			  "test return (%s) should be NULL", ret);
	MU_ASSERT(!(ret = ft_strnstr(buf, "9682", 10)), \
			  "test return (%s) should be NULL", ret);
	MU_ASSERT(!strcmp(ft_strnstr(buf, "6", 10), "6"), \
			  "test (%s) and ctrl (%s) differ", ft_strnstr(buf, "6", 10), "6");

	bzero(buf, 11);
	strcpy(buf, "u\0 deux 96");
	MU_ASSERT(!(ret = ft_strnstr(buf, "deux", 10)), \
			  "test return (%s) should be NULL", ret);
}
