/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:06:29 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:24:24 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_memcpy(void)
{
	intro("memcpy");

    char    src[] = "test\0memcpy";
    char    dest[12];
    char    *ret = NULL;

    strcpy(dest, "memcpy_test");
    ret = ft_memcpy(dest, src, 12);
    if (memcmp(src, dest, 12))
		return (ko_str(__LINE__, "s[12], test\0memcpy, 12", dest, src));
    if (ret != dest || memcmp(dest, ret, 12))
		return (ko_str(__LINE__, "s[12], test\0memcpy, 12 (return)",\
					   dest, ret));

    strcpy(dest, "memcpy_test");
    ret = ft_memcpy(dest, src, 0);
    if (memcmp("memcpy_test", dest, 0))
		return (ko_str(__LINE__, "s[12], test\0memcpy, 0", dest, src));
    if (ret != dest || memcmp(dest, ret, 12))
		return (ko_str(__LINE__, "s[12], test\0memcpy, 0 (return)", dest, ret));
	
	return (ok());
}
