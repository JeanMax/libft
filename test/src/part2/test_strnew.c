/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:19 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 02:05:12 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strnew(void)
{
	char	*str;
	char	*t;

	intro("strnew");

	str = ft_strnew(100);
	t = malloc(101);
	bzero(t, 101);
	if (memcmp(str, t, 101))
		return (ko_str(__LINE__, "100", str, t));
	free(str);
	free(t);

	if (!(str = ft_strnew(0)))
		return (ko_str(__LINE__, "0", "null", "null"));
	free(str);

/*
	if (ft_strnew(ULONG_MAX - 1))
		return (ko_str(__LINE__, "ULONG_MAX", "non", "null"));
 */

	return (ok());
}
