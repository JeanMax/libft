/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:21:04 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:25:24 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_memset(void)
{
    char    s_test[5];
    char    s_ctrl[5];
    char    *ret_ctrl = NULL;
    char    *ret_test = NULL;

	intro("memset");

    bzero(s_test, 5);
    bzero(s_ctrl, 5);

    ret_ctrl = memset(s_ctrl, 'z', 4);
    ret_test = ft_memset(s_test, 'z', 4);
    if (memcmp(s_test, s_ctrl, 5))
		return (ko_str(__LINE__, "s[5], z, 4", s_test, s_ctrl));
    if (ret_ctrl != s_ctrl || memcmp(ret_test, ret_ctrl, 5))
		return (ko_str(__LINE__, "s[5], z, 4 (return)", ret_test, ret_ctrl));

    ret_ctrl = NULL;
    ret_test = NULL;
    ret_ctrl = memset(s_ctrl, 'a', 0);
    ret_test = ft_memset(s_test, 'a', 0);
    if (memcmp(s_test, s_ctrl, 5))
		return (ko_str(__LINE__, "s[5], a, 0", s_test, s_ctrl));
    if (ret_ctrl != s_ctrl || memcmp(ret_test, ret_ctrl, 5))
		return (ko_str(__LINE__, "s[5], a, 0 (return)", ret_test, ret_ctrl));
	
	return (ok());
}
