/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putdbl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:58:55 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 19:39:09 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putdbl()
{
	int		out;
	int		p[2];
	char	*ctrl = "0.000000\n42.420000\n-42.420000\n0.424200\n-4242.420000\n";
	char	test[0xff];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putdbl(0);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl(42.42);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl(-42.42);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl(0.4242);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl(-4242.42);
	write(STDOUT_FILENO, "\n", 1);
	dup2(out, 1);
	test[read(p[0], test, strlen(ctrl))] = 0; //yolo
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
