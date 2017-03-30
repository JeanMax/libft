/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:35:26 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:06:57 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strcmp(void)
{
	intro("strcmp");

	if (ft_strcmp("", ""))
		return (ko_int(__LINE__, "nil, nil", \
					   ft_strcmp("", ""), strcmp("", "")));

	if (ft_strcmp("abc", "abc"))
		return (ko_int(__LINE__, "abc, abc", \
					   ft_strcmp("abc", "abc"), strcmp("abc", "abc")));

	if (ft_strcmp("abc", "abd") >= 0)
		return (ko_int(__LINE__, "abc, abd", \
					   ft_strcmp("abc", "abd"), strcmp("abc", "abd")));

	if (ft_strcmp("\200", "\0") <= 0)
		return (ko_int(__LINE__, "\\200, \\0", \
					   ft_strcmp("\200", "\0"), strcmp("\200", "\0")));

	if (!ft_strcmp("a", "abcde"))
		return (ko_int(__LINE__, "a, abcde", \
					   ft_strcmp("a", "abcde"), strcmp("a", "abcde")));
	
	return (ok());
}
