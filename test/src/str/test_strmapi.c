/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:42 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:01:28 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static char mapi_test(unsigned int i, char c)
{
	return (c + i);
}

void test_strmapi()
{
	char	*src;
	char	*dst;

	src = strdup("abcde");
	dst = ft_strmapi(src, mapi_test);
	free(src);
	src = NULL;

	MU_ASSERT(!strcmp(dst, "acegi"), \
			  "test (%s) and ctrl (%s) differ", dst, "acegi");
	free(dst);
}
