/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:55:11 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:03:35 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strncat(void)
{
	char	buf[20];

	intro("strncat");

	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	if (strcmp(buf, "To be or not"))
		return (ko_str(__LINE__, "To be , or not to be, 6", \
					   buf, "To be or not"));
	
	ft_strncat(buf, "efefef", 0);
	if (strcmp(buf, "To be or not"))
		return (ko_str(__LINE__, "To be or not, efefef, 0", \
					   buf, "To be or not"));

	if (buf != ft_strncat(buf, "", 0))
		return (ko_str(__LINE__, "To be or not, nil, 0 (return)", \
					   ft_strncat(buf, "", 0), buf));

	return (ok());
}
