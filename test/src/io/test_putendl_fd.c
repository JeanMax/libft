/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:05 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:34:43 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putendl_fd()
{
	int		p[2];
	char	test[100];

	pipe(p);
	ft_putendl_fd("A QUE KOUKOU", p[1]);
	test[read(p[0], test, 100)] = 0;
	close(p[0]);
	close(p[1]);

	MU_ASSERT(!strcmp(test, "A QUE KOUKOU\n"),							\
			  "test (%s) and ctrl (%s) differ", test, "A QUE KOUKOU\n");
}
