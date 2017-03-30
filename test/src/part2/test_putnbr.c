/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:02 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 13:58:27 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putnbr(void)
{
	int		out;
	int		p[2];
	char	buf[100];

	intro("putnbr");

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	ft_putnbr(12300);
	ft_putnbr(10203);
	ft_putnbr(-56);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	dup2(out, 1);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, "01-11230010203-562147483647-2147483648"))
		return (ko_str(__LINE__, \
					   "0 1 -1 12300 10203 -56 2147483647 -2147483648", \
					   buf, "01-11230010203-562147483647-2147483648"));

	return (ok());
}
