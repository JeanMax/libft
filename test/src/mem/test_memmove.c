/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:14:28 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 15:51:36 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memmove()
{
	char	test[] = "abcdef";
	char	ctrl[] = "abcdef";

	ft_memmove(test + 1, test, 5);
	ft_memmove(test + 1, test, 0);
	memmove(ctrl + 1, ctrl, 5);
	memmove(ctrl + 1, ctrl, 0);
	MU_ASSERT(!strcmp(test, "aabcde") , \
			  "test (%s) and ctrl (%s) differ", test, "aabcde");
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);

	strcpy(test, "abcdef");
	strcpy(ctrl, "abcdef");
	ft_memmove(test, test + 1, 5);
	ft_memmove(test, test + 1, 0);
	memmove(ctrl, ctrl + 1, 5);
	memmove(ctrl, ctrl + 1, 0);
	MU_ASSERT(!strcmp(test, "bcdeff"), \
			  "test (%s) and ctrl (%s) differ", test, "aabcde");
	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
