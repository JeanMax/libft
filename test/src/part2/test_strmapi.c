/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:42 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:53:52 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static char mapi_test(unsigned int i, char c)
{
	return (c + i);
}

int		test_strmapi(void)
{
	char	*src;
	char	*dst;

	intro("strmapi");

	src = strdup("abcde");
	dst = ft_strmapi(src, mapi_test);
	free(src);
	src = NULL;

	if (strcmp(dst, "acegi"))
		return (ko_str(__LINE__, "abcde, c+i", dst, "acegi"));
	free(dst);


	return (ok());
}
