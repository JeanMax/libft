/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:53:33 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 23:04:56 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strstr(void)
{
	int		i;
	char	buf[64];
	char	*t[] =
		{
			"une",
			"C",
			".",
			"aaaaa",
			"Cecix",
			"zboub",
			"",
			NULL
		};

	intro("strstr");

	bzero(buf, 64);
	strcpy(buf, "Ceci n'est pas une pipe.");
	for (i = 0; t[i] ; i++)
		if (ft_strstr(buf, t[i]) != strstr(buf, t[i]))
			return (ko_str(__LINE__, strcat(buf, t[i]),	\
						   ft_strstr(buf, t[i]), strstr(buf, t[i])));

	return (ok());
}
