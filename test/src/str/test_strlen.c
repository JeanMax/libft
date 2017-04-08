/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:52:36 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:59:27 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strlen()
{
	int		i;
	char	*t[] = {
		"",
		"toto",
		"schtroumpf"
	};

	for (i = 0; i < 3; i++)
		MU_ASSERT(ft_strlen(t[i]) == strlen(t[i]), \
				  "test (%lu) and ctrl (%lu) differ (input: %s)", ft_strlen(t[i]), strlen(t[i]), t[i]);
}
