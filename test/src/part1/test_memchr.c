/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:50:45 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:46:05 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_memchr(void)
{
	char	s1[] = "test\200string";

	intro("memchr");

	if (memchr(s1, 'a', 12) != ft_memchr(s1, 'a', 12))
		return (ko_str(__LINE__, "test\\200string, a, 12", \
					   ft_memchr(s1, 'a', 12), memchr(s1, 'a', 12)));


	if (memchr(s1, '\200', 12) != ft_memchr(s1, '\200', 12))
		return (ko_str(__LINE__, "test\\200string, \\200, 12", \
					   ft_memchr(s1, '\200', 12), memchr(s1, '\200', 12)));

	if (memchr(s1, 'g', 10) != ft_memchr(s1, 'g', 10))
		return (ko_str(__LINE__, "test\\200string, g, 10", \
					   ft_memchr(s1, 'g', 10), memchr(s1, 'g', 10)));

	if (memchr(s1, 'g', 11) != ft_memchr(s1, 'g', 11))
		return (ko_str(__LINE__, "test\\200string, g, 11", \
					   ft_memchr(s1, 'g', 11), memchr(s1, 'g', 11)));

	return (ok());
}
