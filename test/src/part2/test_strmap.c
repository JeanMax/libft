/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:46 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:52:34 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static char	map_test(char c)
{
	return (c + 1);
}

int		test_strmap(void)
{
	char	*src;
	char	*dst;

	intro("strmap");

	src = strdup("abcde");
	dst = ft_strmap(src, map_test);
	free(src);
	src = NULL;

	if (strcmp(dst, "bcdef"))
		return (ko_str(__LINE__, "src, c+1", dst, "bcdef"));
	free(dst);

	return (ok());
}
