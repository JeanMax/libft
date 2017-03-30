/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:37 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 13:54:30 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putchar_fd(void)
{
	int		p[2];
	char	buf[100];

	intro("putchar_fd");

	pipe(p);
	ft_putchar_fd('a', p[1]);
	ft_putchar_fd('b', p[1]);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	if (strcmp(buf, "ab"))
		return (ko_str(__LINE__, "a b", buf, "ab"));

	return (ok());
}
