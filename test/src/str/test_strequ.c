/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:30 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:43:50 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strequ()
{
	MU_ASSERT(ft_strequ("", ""), "return should be TRUE");
	MU_ASSERT(ft_strequ("abcDEF", "abcDEF"), "return should be TRUE");
	MU_ASSERT(!ft_strequ("abcDEF", "abcDEf"), "return should be FALSE");
}
