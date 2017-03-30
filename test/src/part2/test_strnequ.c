/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:30 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:58:22 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strnequ(void)
{
	intro("strnequ");

	if (ft_strnequ("ededeqdf", "", 0) != 1)
		return (ko_int(__LINE__, "ededeqdf, nil, 0", \
					   ft_strnequ("ededeqdf", "", 0), 1));

	if (ft_strnequ("abcde", "abdfe", 2) != 1)
		return (ko_int(__LINE__, "abcde, abdfe, 2", \
					   ft_strnequ("abcde", "abdfe", 2), 1));

	if (ft_strnequ("abc", "abc", 100) != 1)
		return (ko_int(__LINE__, "abc, abc, 100", \
					   ft_strnequ("abc", "abc", 100), 1));

	if (ft_strnequ("abcde", "abdde", 5) != 0)
		return (ko_int(__LINE__, "abcde, abdde, 5", \
					   ft_strnequ("abcde", "abdde", 5), 0));


	return (ok());
}
