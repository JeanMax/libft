/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:44:43 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:39:49 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strrchr()
{
	char	buf[] = "abcdedcba";
	char    c[] = {'a', 'z', 'd', '\0'};

	for (int i = 0; i < (int)(sizeof(c) / sizeof(char)); i++) {
		MU_ASSERT(strrchr(buf, c[i]) == ft_strrchr(buf, c[i]),				\
				  "test (%s) and ctrl (%s) differ (buf: %s, c[i]: %c)", ft_strrchr(buf, c[i]), strrchr(buf, c[i]), buf, c[i]);
	}

	buf[4] = 0;
	for (int i = 0; i < (int)(sizeof(c) / sizeof(char)); i++) {
		MU_ASSERT(strrchr(buf, c[i]) == ft_strrchr(buf, c[i]),				\
				  "test (%s) and ctrl (%s) differ (buf: %s, c[i]: %c)", ft_strrchr(buf, c[i]), strrchr(buf, c[i]), buf, c[i]);
	}
}
