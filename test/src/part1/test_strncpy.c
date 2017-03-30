/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:16:34 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:21:32 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strncpy(void)
{
	char	buf[6];

	intro("strncpy");

	memset(buf, 33, 6);
	ft_strncpy(buf, "abc", 6);
	if (memcmp(buf, "abc\0\0", 6))
		return (ko_str(__LINE__, "abc, abc\\0\\0, 6", buf, "abc"));

	memset(buf, 'z', 6);
	ft_strncpy(buf, "abcdefghi", 6);
	if (memcmp(buf, "abcdefghi", 6))
		return (ko_str(__LINE__, "zzzzzz, abcdefghi, 6", buf, "abcdef"));
	
	return (ok());
}
