/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:42 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:36:11 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putstr_fd()
{
	int		p[2];
	char	test[100];

	pipe(p);
	ft_putstr_fd("A QUE KOUKOU", p[1]);
	test[read(p[0], test, 100)] = 0;
	close(p[0]);
	close(p[1]);

	MU_ASSERT(!strcmp(test, "A QUE KOUKOU"),								\
			  "test (%s) and ctrl (%s) differ", test, "A QUE KOUKOU");
}
