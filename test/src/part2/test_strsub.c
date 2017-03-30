/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:01:53 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 02:29:48 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strsub(void)
{
	char	*str = "saluthello";
	char	*test;

	intro("strsub");

	test = ft_strsub(str, 5, 5);
	if (strcmp(test, "hello"))
		return (ko_str(__LINE__, "saluthello, 5, 5", test, "hello"));
	free(test);

	test = ft_strsub(str, 0, 0);
	if (strcmp(test, ""))
		return (ko_str(__LINE__, "saluthello, 0, 0", test, "nil"));
	free(test);

/*
	if ((test = ft_strsub(str, 0, UINT_MAX)))
		return (ko_str(__LINE__, "saluthello, 0, UNINT_MAX", test, "null"));
*/
	return (ok());
}
