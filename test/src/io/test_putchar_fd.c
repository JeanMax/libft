/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:37 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:33:16 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putchar_fd()
{
	int		p[2];
	char	test[100];

	pipe(p);
	ft_putchar_fd('a', p[1]);
	ft_putchar_fd('b', p[1]);
	test[read(p[0], test, 100)] = 0;
	close(p[0]);
	close(p[1]);

	MU_ASSERT(!strcmp(test, "ab"), \
			  "test (%s) and ctrl (%s) differ", test, "ab");
}
