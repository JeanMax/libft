/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:52:36 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:57:02 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_strlen(void)
{
	int		i;
	char	*t[] =
		{
			"",
			"toto",
			"schtroumpf"
		};

	intro("strlen");

	for (i = 0; i < 3; i++)
		if (ft_strlen(t[i]) != strlen(t[i]))
			return (ko_int(__LINE__, t[i], ft_strlen(t[i]), strlen(t[i])));

	return (ok());
}
