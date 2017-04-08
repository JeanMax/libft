/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:46 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:00:39 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static char	map_test(char c)
{
	return (c + 1);
}

void test_strmap()
{
	char	*src;
	char	*dst;

	src = strdup("abcde");
	dst = ft_strmap(src, map_test);
	free(src);
	src = NULL;

	MU_ASSERT(!strcmp(dst, "bcdef"), \
			  "test (%s) and ctrl (%s) differ", dst, "bcdef");
	free(dst);
}
