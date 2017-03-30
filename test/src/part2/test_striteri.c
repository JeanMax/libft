/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:01 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:50:31 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	iti_test(unsigned int i, char *s)
{
	*(s) += i;
}

int		test_striteri(void)
{
	char	str[] = "aBcDeF";

	intro("striteri");

	ft_striteri(str, iti_test);
	if (strcmp(str, "aCeGiK"))
		return (ko_str(__LINE__, "aBcDeF, *(s)+=i", str, "aCeGiK"));


	return (ok());
}
