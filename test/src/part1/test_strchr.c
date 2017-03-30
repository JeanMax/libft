/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:32:46 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:35:06 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strchr(void)
{
	intro("strchr");

	char	str[]="test string";

	if (strchr(str, ' ') != ft_strchr(str, ' '))
		return (ko_str(__LINE__, "test string, ' '", \
					   ft_strchr(str, ' '), strchr(str, ' ')));

	if (strchr(str, '\0') != ft_strchr(str, '\0'))
		return (ko_str(__LINE__, "test string, \\0", \
					   ft_strchr(str, ' '), strchr(str, ' ')));

	if (strchr(str, '@') != ft_strchr(str, '@'))
		return (ko_str(__LINE__, "test string, @", \
					   ft_strchr(str, ' '), strchr(str, ' ')));
	
	return (ok());
}
