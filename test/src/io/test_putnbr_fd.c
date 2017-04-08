/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:52 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/05 22:38:15 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_putnbr_fd()
{
	int		p[2];
	char	test[100];

	pipe(p);
	ft_putnbr_fd(0, p[1]);
	ft_putnbr_fd(1, p[1]);
	ft_putnbr_fd(-1, p[1]);
	ft_putnbr_fd(56, p[1]);
	ft_putnbr_fd(-1230, p[1]);
	ft_putnbr_fd(10203, p[1]);
	ft_putnbr_fd(2147483647, p[1]);
	ft_putnbr_fd(-2147483648, p[1]);
	test[read(p[0], test, 100)] = 0;
	close(p[0]);
	close(p[1]);
	MU_ASSERT(!strcmp(test, "01-156-1230102032147483647-2147483648"),	\
			  "test (%s) and ctrl (%s) differ", test, "01-156-1230102032147483647-2147483648");
}
