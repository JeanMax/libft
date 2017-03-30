/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:17:16 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:26:56 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_bzero(void)
{
    char    s_test[5];
    char    s_ctrl[5];

	intro("bzero");

    bzero(s_test, 5);
    bzero(s_ctrl, 5);

    memset(s_test, 'z', 4);
    memset(s_ctrl, 'z', 4);
    bzero(s_ctrl, 4);
    ft_bzero(s_test, 4);
    if (memcmp(s_test, s_ctrl, 5))
		return (ko_str(__LINE__, "4", s_test, s_ctrl));

    memset(s_test, 'a', 4);
    memset(s_ctrl, 'a', 4);
    bzero(s_ctrl, 0);
    ft_bzero(s_test, 0);
    if (memcmp(s_test, s_ctrl, 5))
		return (ko_str(__LINE__, "0", s_test, s_ctrl));

	return (ok());
}
