/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:52 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 13:59:47 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putnbr_fd(void)
{
	int		p[2];
	char	buf[100];

	intro("putnbr_fd");

	pipe(p);
	ft_putnbr_fd(0, p[1]);
	ft_putnbr_fd(1, p[1]);
	ft_putnbr_fd(-1, p[1]);
	ft_putnbr_fd(56, p[1]);
	ft_putnbr_fd(-1230, p[1]);
	ft_putnbr_fd(10203, p[1]);
	ft_putnbr_fd(2147483647, p[1]);
	ft_putnbr_fd(-2147483648, p[1]);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	if (strcmp(buf, "01-156-1230102032147483647-2147483648"))
		return (ko_str(__LINE__, \
					   "0 1 -1 56 -1230 10203 2147483647 -2147483648",	\
					   buf, "01-156-1230102032147483647-2147483648"));


	return (ok());
}
