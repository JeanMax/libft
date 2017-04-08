/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_clr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:58:55 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 20:09:01 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putchar_clr()
{
	int		out;
	int		p[2];
	char	*ctrl = CLR_GREEN"4"CLR_RESET CLR_YELLOW"2"CLR_RESET CLR_RED"!"CLR_RESET;
	char	test[0xff];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putchar_clr('4', CLR_GREEN);
	ft_putchar_clr('2', CLR_YELLOW);
	ft_putchar_clr('!', CLR_RED);
	dup2(out, 1);
	test[read(p[0], test, strlen(ctrl))] = 0; //yolo
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
