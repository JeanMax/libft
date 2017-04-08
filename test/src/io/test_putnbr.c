/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:02 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:37:21 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putnbr()
{
	int		out;
	int		p[2];
	char	test[100];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	ft_putnbr(12300);
	ft_putnbr(10203);
	ft_putnbr(-56);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	dup2(out, 1);
	test[read(p[0], test, 100)] = 0;
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, "01-11230010203-562147483647-2147483648"),	\
			  "test (%s) and ctrl (%s) differ", test, "01-11230010203-562147483647-2147483648");
}
