/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_debugstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:58:55 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 19:32:37 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_debugstr()
{
	int		out;
	int		p[2];
	char	*ctrl = CLR_RED"<debug:"CLR_GREEN"42"CLR_RED">"CLR_RESET"\n";
	char	test[0xff];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_debugstr("debug", "42");
	dup2(out, 1);
	test[read(p[0], test, strlen(ctrl))] = 0; //yolo
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, ctrl), \
			  "test (%s) and ctrl (%s) differ", test, ctrl);
}
