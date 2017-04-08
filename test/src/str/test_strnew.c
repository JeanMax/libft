/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:19 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:19:31 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strnew()
{
	char	*str;
	char	*t;

	str = ft_strnew(100);
	t = malloc(101);
	bzero(t, 101);
	MU_ASSERT(!memcmp(str, t, 101), "test (%s) not bzero'ed", str);
	free(str);
	free(t);

	MU_ASSERT((str = ft_strnew(0)), "ptr null");
	free(str);

/*
	if (ft_strnew(ULONG_MAX - 1))
		return (ko_str(__LINE__, "ULONG_MAX", "non", "null"));
*/
}
