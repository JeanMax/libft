/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:35 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:17:34 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_memdel(void)
{
	void *mem;

	intro("memdel");

	if ((mem = malloc(512)))
	{
		ft_memdel(&mem);
		if (mem)
			return (ko_str(__LINE__, "ptr", "non", "null"));
	}

	return (ok());
}
