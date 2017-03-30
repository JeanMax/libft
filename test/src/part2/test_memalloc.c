/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:50 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:15:10 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_memalloc(void)
{
	void *test;
	void *ctrl;

	intro("memalloc");


	if (!(test = ft_memalloc(512)))
		return (ko_str(__LINE__, "512", "null", "return"));
	if ((ctrl = malloc(512)))
	{
		bzero(ctrl, 512);
		if (memcmp(test, ctrl, 512))
			return (ko_str(__LINE__, "512: memcmp diff", "42", "42"));
		free(ctrl);
	}
	free(test);

/*
	ctrl = malloc(ULONG_MAX);
	test = ft_memalloc(ULONG_MAX);
	if ((test && !ctrl) || (!test && ctrl))
		return (ko_str(__LINE__, "512: memcmp diff", "42", "42"));
	ctrl ? free(ctrl) : (void)0;
	test ? free(test) : (void)0;
*/

	return (ok());
}
