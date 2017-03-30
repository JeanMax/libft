/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:47:07 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:05:39 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

int test_memcmp(void)
{
	char	str1[]="test string",
			str2[]="test spring";

	intro("memcmp");

	if (ft_memcmp(str1, str2, 12) != memcmp(str1, str2, 12))
		return (ko_int(__LINE__, "test string, test spring, 12", \
					   ft_memcmp(str1, str2, 12), memcmp(str1, str2, 12)));

	if (ft_memcmp(str1, str2, 6) != memcmp(str1, str2, 6))
		return (ko_int(__LINE__, "test string, test spring, 6", \
					   ft_memcmp(str1, str2, 6), memcmp(str1, str2, 6)));

	if (ft_memcmp("a", "b", 0) != memcmp("a", "b", 0))
		return (ko_int(__LINE__, "a, b, 0", \
					   ft_memcmp("a", "b", 0), memcmp("a", "b", 0)));

	str1[1] = '\0';
	str2[1] = '\0';
	str1[2] = 'a';
	str2[2] = 'b';
	if (ft_memcmp(str1, str2, 3) != memcmp(str1, str2, 3))
		return (ko_int(__LINE__, "t\\0at string, t\\0bt string, 3", \
					   ft_memcmp(str1, str2, 3), memcmp(str1, str2, 3)));

	if (ft_memcmp("\200", "\0", 1) != memcmp("\200", "\0", 1))
		return (ko_int(__LINE__, "\\200, \\0, 1", \
					   ft_memcmp("\200", "\0", 1), memcmp("\200", "\0", 1)));

	return (ok());
}
