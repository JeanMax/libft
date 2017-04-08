/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:56:35 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 15:52:29 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memdel()
{
	void *mem;

	if ((mem = malloc(512)))
	{
		ft_memdel(&mem);
		MU_ASSERT(!mem, "ptr non null");
	}
}