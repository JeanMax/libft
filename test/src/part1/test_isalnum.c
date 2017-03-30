/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:38:59 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 23:06:25 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_isalnum(void)
{
	int test, ctrl;
	char s[2];

	intro("isalnum");
	
	*(s + 1) = 0;
	*s = -128;
	do 
	{
		test = ft_isalnum((int)*s);
		ctrl = isalnum((int)*s);
		if ((!test && ctrl) || (test && !ctrl) || test < 0)
			return (ko_int(__LINE__, s, test, ctrl));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
