/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:39:56 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:38:17 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_isdigit(void)
{
	int test, ctrl;
	char s[2];

	intro("isdigit");

	*(s + 1) = 0;
	*s = -128;
	do 
	{
		test = ft_isdigit((int)*s);
		ctrl = isdigit((int)*s);
		if ((!test && ctrl) || (test && !ctrl) || test < 0)
			return (ko_int(__LINE__, s, test, ctrl));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
