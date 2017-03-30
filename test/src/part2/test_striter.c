/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:13 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:38:48 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	it_test(char *s)
{
	(*s)++;
}

int		test_striter(void)
{
	char	str[] = "aBcDeF";

	intro("striter");

	ft_striter(str, it_test);
	if (strcmp(str, "bCdEfG"))
		return (ko_str(__LINE__, "aBcDeF, *s+1", str, "bCdEfG"));

	return (ok());
}
