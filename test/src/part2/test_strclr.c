/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:00:27 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:19:27 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strclr(void)
{
	intro("strclr");

	char	str[] = "tttttt";

	ft_strclr(str);
	if (memcmp(str, "\0\0\0\0\0\0", 7))
		return (ko_str(__LINE__, "s[7]==ttttttt", str, ""));

	return (ok());
}
