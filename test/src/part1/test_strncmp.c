/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:04:20 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:16:01 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strncmp(void)
{
	intro("strncmp");

	if (ft_strncmp("abc", "abcde", 3))
		return (ko_int(__LINE__, "abc, abcde, 3", \
					   ft_strncmp("abc", "abcde", 3), \
					   strncmp("abc", "abcde", 3)));

	if (ft_strncmp("\200", "\0", 1 <= 0))
		return (ko_int(__LINE__, "\\200, \\0, 1", \
					   ft_strncmp("\200", "\0", 1), \
					   strncmp("\200", "\0", 1)));

	if (ft_strncmp("abc", "abc\0defg", 100))
		return (ko_int(__LINE__, "abc, abc\\0defg, 100", \
					   ft_strncmp("abc", "abc\0defg", 100), \
					   strncmp("abc", "abc\0defg", 100)));

	if (ft_strncmp("ab\0cde", "abcc\0e", 20) >= 0)
		return (ko_int(__LINE__, "ab\\0cde, abcc\\0e, 20", \
					   ft_strncmp("ab\0cde", "abcc\0e", 20), \
					   strncmp("ab\0cde", "abcc\0e", 20)));

	return (ok());
}
