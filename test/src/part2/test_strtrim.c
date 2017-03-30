/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:01:19 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 02:44:50 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strtrim(void)
{
	char	*test;

	intro("strtrim");

	test = ft_strtrim("\t\n  \tAAA \t BBB\t\n  \t");
	if (strcmp(test, "AAA \t BBB"))
		return (ko_str(__LINE__, "\t\n  \tAAA \t BBB\t\n  \t", test, "AAA \t BBB"));
	free(test);

	test = ft_strtrim("\t\t\n\t\t   ");
	if (strcmp(test, ""))
		return (ko_str(__LINE__, "\t\t\n\t\t   ", test, "nil"));
	free(test);

	test = ft_strtrim("");
	if (strcmp(test, ""))
		return (ko_str(__LINE__, "nil", test, "nil"));
	free(test);

	test = ft_strtrim("abc");
	if (strcmp(test, "abc"))
		return (ko_str(__LINE__, "abc", test, "abc"));
	free(test);

	return (ok());
}
