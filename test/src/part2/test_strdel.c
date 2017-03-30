/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:19 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:20:41 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strdel(void)
{
	char	*str;

	intro("strdel");

	str = malloc(123);
	ft_strdel(&str);
	if (str)
		return (ko_str(__LINE__, "ptr", "non", "null"));

	return (ok());
}
