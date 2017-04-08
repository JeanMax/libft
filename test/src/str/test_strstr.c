/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:53:33 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:53:08 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_strstr()
{
	int		i;
	char	buf[64];
	char	*t[] = {
		"une",
		"C",
		".",
		"aaaaa",
		"Cecix",
		"zboub",
		"",
		NULL
	};

	bzero(buf, 64);
	strcpy(buf, "Ceci n'est pas une pipe.");
	for (i = 0; t[i] ; i++) {
		MU_ASSERT(ft_strstr(buf, t[i]) == strstr(buf, t[i]),
				  "test (%s) and ctrl (%s) differ", ft_strstr(buf, t[i]), strstr(buf, t[i]));
	}
}
