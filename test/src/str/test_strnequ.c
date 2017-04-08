/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:30 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:17:12 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strnequ()
{
	MU_ASSERT(ft_strnequ("ededeqdf", "", 0), "return should be TRUE");
	MU_ASSERT(ft_strnequ("abcde", "abdfe", 2), "return should be TRUE");
	MU_ASSERT(ft_strnequ("abc", "abc", 100), "return should be TRUE");
	MU_ASSERT(!ft_strnequ("abcde", "abdde", 5), "return should be FALSE");
}
