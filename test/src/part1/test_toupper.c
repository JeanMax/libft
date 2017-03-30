/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:05:11 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 23:09:49 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_toupper(void)
{
	char s[2];

	intro("toupper");

	*(s + 1) = 0;
	*s = 0;
	do 
	{
		if (ft_toupper(*s) != toupper(*s))
			return (ko_int(__LINE__, s, ft_toupper(*s), toupper(*s)));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
