/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:21 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 13:55:35 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putendl(void)
{
	int		out;
	int		p[2];
	char	buf[4];

	intro("putendl");

	out = dup(1);
	pipe(p);
	dup2(p[1], 1);
	ft_putendl("aa");
	dup2(out, 1);
	read(p[0], buf, 3);
	buf[3] = 0;
	close(p[0]);
	close(p[1]);
	close(out);
	if (strcmp(buf, "aa\n"))
		return (ko_str(__LINE__, "aa", buf, "aa\n"));

	return (ok());
}
