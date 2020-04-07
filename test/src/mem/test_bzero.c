/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:17:16 by mcanal            #+#    #+#             */
/*   Updated: 2020/04/07 14:42:16 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_bzero()
{
    char    s_test[5];
    char    s_ctrl[5];

    bzero(s_test, 5);
    bzero(s_ctrl, 5);

    memset(s_test, 'z', 4);
    memset(s_ctrl, 'z', 4);
    bzero(s_ctrl, 4);
    ft_bzero(s_test, 4);
	MU_ASSERT(!memcmp(s_test, s_ctrl, 5), \
			  "test (%s) and ctrl (%s) differ", s_test, s_ctrl);

    memset(s_test, 'a', 4);
    memset(s_ctrl, 'a', 4);
    bzero(s_ctrl, (0));
    ft_bzero(s_test, (0));
	MU_ASSERT(!memcmp(s_test, s_ctrl, 5), \
			  "test (%s) and ctrl (%s) differ", s_test, s_ctrl);
}
