/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_clr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:58:55 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 20:10:00 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putstr_clr()
{
	int		out;
	int		p[2];
	char	*ctrl = CLR_GREEN"-42"CLR_RESET CLR_YELLOW"0"CLR_RESET CLR_RED"42"CLR_RESET;
	char	test[0xff];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putstr_clr("-42", CLR_GREEN);
	ft_putstr_clr("0", CLR_YELLOW);
	ft_putstr_clr("42", CLR_RED);
	dup2(out, 1);
	test[read(p[0], test, strlen(ctrl))] = 0; //yolo
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
