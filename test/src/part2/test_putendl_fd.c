/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:05 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 13:56:25 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_putendl_fd(void)
{
	int		p[2];
	char	buf[100];

	intro("putendl_fd");

	pipe(p);
	ft_putendl_fd("A QUE KOUKOU", p[1]);
	buf[read(p[0], buf, 100)] = 0;
	close(p[0]);
	close(p[1]);
	if (strcmp(buf, "A QUE KOUKOU\n"))
		return (ko_str(__LINE__, "A QUE KOUKOU", buf, "A QUE KOUKOU\n"));

	return (ok());
}
