/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:08 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:47:18 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strjoin()
{
	char *ret;

	ret = ft_strjoin("abc", "def");
	MU_ASSERT(!strcmp(ret, "abcdef"), \
			  "test (%s) and ctrl (%s) differ", ret, "bCdEfG");
	free(ret);

	ret = ft_strjoin("", "");
	MU_ASSERT(!strcmp(ret, ""), \
			  "test (%s) and ctrl (%s) differ", ret, "");
	free(ret);
}
