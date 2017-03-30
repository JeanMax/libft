/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:58:55 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:00:42 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putstr(void)
{
	int		out;
	int		p[2];
	char	buf[4];

	intro("putstr");

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putstr("aaa");
	dup2(out, 1);
	read(p[0], buf, 3);
	buf[3] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, "aaa"))
		return (ko_str(__LINE__, "aaa", buf, "aaa"));


	return (ok());
}
