/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_istoobig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc </var/spool/mail/mc>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 16:57:56 by mc                #+#    #+#             */
/*   Updated: 2017/04/08 17:04:12 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_test.h"

void test_istoobig()
{
	char	*ok[] = {
		"",
		"2798",
		"-153",
		"132",
		"-2147483648",
		"2147483647",
		NULL
	};

	char	*ko[] = {
		"-214748364842",
		"214748364742",
		NULL
	};

	for (int i = 0; ok[i]; i++) {
		MU_ASSERT(!ft_istoobig(ok[i]), "test (%s) shouldn't be too big", ok[i]);
	}

	for (int i = 0; ko[i]; i++) {
		MU_ASSERT(ft_istoobig(ko[i]), "test (%s) should be too big", ko[i]);
	}
}
