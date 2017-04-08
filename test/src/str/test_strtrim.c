/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:01:19 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:56:23 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strtrim()
{
	char	*test;

	test = ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t");
	MU_ASSERT(!strcmp(test, "AAA \t BBB"), \
			  "test (%s) and ctrl (%s) differ", test, "AAA \t BBB");
	free(test);

	test = ft_strtrim("\t\t\n\t\t   ");
	MU_ASSERT(!strcmp(test, ""), \
			  "test (%s) and ctrl (%s) differ", test, "");
	free(test);

	test = ft_strtrim("");
	MU_ASSERT(!strcmp(test, ""), \
			  "test (%s) and ctrl (%s) differ", test, "");
	free(test);

	test = ft_strtrim("abc");
	MU_ASSERT(!strcmp(test, "abc"), \
			  "test (%s) and ctrl (%s) differ", test, "abc");
	free(test);
}
