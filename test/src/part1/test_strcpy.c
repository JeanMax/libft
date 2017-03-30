/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:42:08 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:46:13 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strcpy(void)
{
	char	test[6];
	char	ctrl[6];

	intro("strcpy");

	bzero(test, 6);
	bzero(ctrl, 6);
	if (strcmp(ft_strcpy(test, "abcde"), strcpy(ctrl, "abcde")))
		return (ko_str(__LINE__, "s[6], abcde", test, ctrl));

	bzero(test, 6);
	bzero(ctrl, 6);
	if (strcmp(ft_strcpy(test, "abc"), strcpy(ctrl, "abc")))
		return (ko_str(__LINE__, "s[6], abc", test, ctrl));
	
	return (ok());
}
