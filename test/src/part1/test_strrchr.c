/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:44:43 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:52:18 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strrchr(void)
{
	char	buf[] = "abcdedcba";

	intro("strrchr");

	if (strrchr(buf, 'a') != ft_strrchr(buf, 'a'))
		return (ko_str(__LINE__, "abcdedcba, a", \
					   ft_strrchr(buf, 'a'), strrchr(buf, 'a')));

	if (strrchr(buf, 0) != ft_strrchr(buf, 0))
		return (ko_str(__LINE__, "abcdedcba, \\0", \
					   ft_strrchr(buf, 0), strrchr(buf, 0)));
	
	if (ft_strrchr(buf, 'z'))
		return (ko_str(__LINE__, "abcdedcba, z", \
					   ft_strrchr(buf, 'z'), "nil"));
	
	buf[4] = 0;
	if (ft_strrchr(buf, 'a') != buf)
		return (ko_str(__LINE__, "abc\\0edcba, a", \
					   ft_strrchr(buf, 'a'), buf));
	
	return (ok());
}
