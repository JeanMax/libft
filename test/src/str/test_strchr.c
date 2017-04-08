/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:32:46 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 18:29:07 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strchr()
{
	char	str[] = "test string";
	char    c[] = {' ', '\0', '@'};

	for (int i = 0; i < (int)(sizeof(c) / sizeof(char)); i++) {
		MU_ASSERT(strchr(str, c[i]) == ft_strchr(str, c[i]),				\
				  "test (%s) and ctrl (%s) differ (str: %s, c[i]: %c)", ft_strchr(str, c[i]), strchr(str, c[i]), str, c[i]);
	}
}
