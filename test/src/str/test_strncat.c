/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:55:11 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:05:14 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strncat()
{
	char	buf[20];

	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	MU_ASSERT(!strcmp(buf, "To be or not"), \
			  "test (%s) and ctrl (%s) differ", buf, "To be or not");


	ft_strncat(buf, "efefef", 0);
	MU_ASSERT(!strcmp(buf, "To be or not"), \
			  "test (%s) and ctrl (%s) differ", buf, "To be or not");

	MU_ASSERT(buf == ft_strncat(buf, "", 0), \
			  "test return (%lu) and ctrl (%lu) differ", (long)ft_strncat(buf, "", 0), (long)buf);
}
