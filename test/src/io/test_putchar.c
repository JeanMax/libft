/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:17 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:32:21 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putchar()
{
	int		out;
	int		p[2];
	char	test[4];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	dup2(out, 1);
	read(p[0], test, 3);
	test[3] = 0;
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, "abc"), \
			  "test (%s) and ctrl (%s) differ", test, "abc");
}
