/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:30 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:24:11 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strequ(void)
{
	intro("strequ");

	if (ft_strequ("", "") != 1)
		return (ko_int(__LINE__, "nil nil", ft_strequ("", ""), 1));

	if (ft_strequ("abcDEF", "abcDEF") != 1)
		return (ko_int(__LINE__, "abcDEF abcDEF", \
					   ft_strequ("abcDEF", "abcDEF"), 1));

	if (ft_strequ("abcDEF", "abcDEf") != 0)
		return (ko_int(__LINE__, "abcDEF abcDEf", \
					   ft_strequ("abcDEF", "abcDEf"), 0));

	return (ok());
}
