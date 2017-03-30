/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:40:13 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:38:26 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_isprint(void)
{
	int test, ctrl;
	char s[2];

	intro("isprint");
	
	*(s + 1) = 0;
	*s = -128;
	do 
	{
		test = ft_isprint((int)*s);
		ctrl = isprint((int)*s);
		if ((!test && ctrl) || (test && !ctrl) || test < 0)
			return (ko_int(__LINE__, s, test, ctrl));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
