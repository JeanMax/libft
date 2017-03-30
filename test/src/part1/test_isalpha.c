/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:29:49 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:38:41 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_isalpha(void)
{
	int test, ctrl;
	char s[2];

	intro("isalpha");

	*(s + 1) = 0;
	*s = -128;
	do 
	{
		test = ft_isalpha((int)*s);
		ctrl = isalpha((int)*s);
		if ((!test && ctrl) || (test && !ctrl) || test < 0)
			return (ko_int(__LINE__, s, test, ctrl));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
