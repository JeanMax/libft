/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putdbl_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:58:55 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 19:36:39 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putdbl_fd()
{
	int		out;
	int		p[2];
	char	*ctrl = "0.000000\n42.420000\n-42.420000\n0.424200\n-4242.420000\n";
	char	test[0xff];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putdbl_fd(0, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl_fd(42.42, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl_fd(-42.42, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl_fd(0.4242, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putdbl_fd(-4242.42, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	dup2(out, 1);
	test[read(p[0], test, strlen(ctrl))] = 0; //yolo
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
