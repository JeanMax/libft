/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:42 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:01:32 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putstr_fd(void)
{
	int		p[2];
	char	buf[100];

	intro("putstr_fd");

	pipe(p);
	ft_putstr_fd("A QUE KOUKOU", p[1]);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	if (strcmp(buf, "A QUE KOUKOU"))
		return (ko_str(__LINE__, "A QUE KOUKOU", buf, "A QUE KOUKOU"));

	return (ok());
}
