/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:21 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:34:10 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putendl()
{
	int		out;
	int		p[2];
	char	test[4];

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putendl("aa");
	dup2(out, 1);
	read(p[0], test, 3);
	test[3] = 0;
	close(p[0]);
	close(p[1]);
	close(out);

	MU_ASSERT(!strcmp(test, "aa\n"), \
			  "test (%s) and ctrl (%s) differ", test, "aa\n");
}
