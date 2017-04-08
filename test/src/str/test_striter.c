/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:13 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:44:53 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	it_test(char *s)
{
	(*s)++;
}

void test_striter()
{
	char	str[] = "aBcDeF";

	ft_striter(str, it_test);
	MU_ASSERT(!strcmp(str, "bCdEfG"), \
			  "test (%s) and ctrl (%s) differ", str, "bCdEfG");
}
