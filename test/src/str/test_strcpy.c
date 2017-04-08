/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:42:08 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:38:15 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strcpy()
{
	char	test[6];
	char	ctrl[6];

	bzero(test, 6);
	bzero(ctrl, 6);
	MU_ASSERT(!strcmp(ft_strcpy(test, "abcde"), strcpy(ctrl, "abcde")), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);

	bzero(test, 6);
	bzero(ctrl, 6);
	MU_ASSERT(!strcmp(ft_strcpy(test, "abc"), strcpy(ctrl, "abc")), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
