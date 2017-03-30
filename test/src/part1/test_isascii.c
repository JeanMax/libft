/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:39:33 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:38:47 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_isascii(void)
{
	int test, ctrl;
	char s[2];

	intro("isascii");
	
	*(s + 1) = 0;
	*s = -128;
	do 
	{
		test = ft_isascii((int)*s);
		ctrl = isascii((int)*s);
		if ((!test && ctrl) || (test && !ctrl) || test < 0)
			return (ko_int(__LINE__, s, test, ctrl));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
