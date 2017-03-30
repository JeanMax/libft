/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:05:19 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 23:10:36 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_tolower(void)
{
	char s[2];

	intro("tolower");

	*(s + 1) = 0;
	*s = 0;
	do 
	{
		if (ft_tolower(*s) != tolower(*s))
			return (ko_int(__LINE__, s, ft_tolower(*s), tolower(*s)));
		(*s)++;
	}
	while (*s != 127);

	return (ok());
}
