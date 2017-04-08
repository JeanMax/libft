/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:01:53 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:54:30 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strsub()
{
	char	*str = "saluthello";
	char	*test;

	test = ft_strsub(str, 5, 5);
	MU_ASSERT(!strcmp(test, "hello"), \
			  "test (%s) and ctrl (%s) differ", test, "hello");
	free(test);

	test = ft_strsub(str, 0, 0);
	MU_ASSERT(!strcmp(test, ""), \
			  "test (%s) and ctrl (%s) differ", test, "");
	free(test);

/*
	if ((test = ft_strsub(str, 0, UINT_MAX)))
		return (ko_str(__LINE__, "saluthello, 0, UNINT_MAX", test, "null"));
*/
}
