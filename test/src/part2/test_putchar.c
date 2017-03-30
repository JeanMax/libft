/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:55:17 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 13:52:48 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putchar(void)
{
	int		out;
	int		p[2];
	char	buf[4];

	intro("putchar");

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	dup2(out, 1);
	read(p[0], buf, 3);
	buf[3] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, "abc"))
		return (ko_str(__LINE__, "a b c", buf, "abc"));

	return (ok());
}
