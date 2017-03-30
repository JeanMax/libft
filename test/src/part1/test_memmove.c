/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:14:28 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:20:36 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_memmove(void)
{
	char	test[] = "abcdef";
	char	ctrl[] = "abcdef";

	intro("memmove");

	ft_memmove(test + 1, test, 5);
	ft_memmove(test + 1, test, 0);
	memmove(ctrl + 1, ctrl, 5);
	memmove(ctrl + 1, ctrl, 0);
	if (strcmp(test, "aabcde") || strcmp(test, ctrl))
		return (ko_str(__LINE__, "abcdef + 1, abcdef, with 5 then 0", \
					   test, ctrl));

	strcpy(test, "abcdef");
	strcpy(ctrl, "abcdef");
	ft_memmove(test, test + 1, 5);
	ft_memmove(test, test + 1, 0);
	memmove(ctrl, ctrl + 1, 5);
	memmove(ctrl, ctrl + 1, 0);
	if (strcmp(test, "bcdeff") || strcmp(test, ctrl))
		return (ko_str(__LINE__, "abcdef, abcdef + 1, with 5 then 0", \
					   test, ctrl));	
	
	return (ok());
}
