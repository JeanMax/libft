/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:01 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 20:45:42 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	iti_test(unsigned int i, char *s)
{
	*(s) += i;
}

void test_striteri()
{
	char	str[] = "aBcDeF";

	ft_striteri(str, iti_test);
	MU_ASSERT(!strcmp(str, "aCeGiK"), \
			  "test (%s) and ctrl (%s) differ", str, "aCeGiK");
}
