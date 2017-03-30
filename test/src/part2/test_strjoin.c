/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:59:08 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 01:47:21 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_strjoin(void)
{
	char *ret;

	intro("strjoin");

	ret = ft_strjoin("abc", "def");
	if (strcmp(ret, "abcdef"))
		return (ko_str(__LINE__, "abc def", ret, "abcdef"));
	free(ret);

	ret = ft_strjoin("", "");
	if (strcmp(ret, ""))
		return (ko_str(__LINE__, "nil nil", ret, "nil"));
	free(ret);

	return (ok());
}
