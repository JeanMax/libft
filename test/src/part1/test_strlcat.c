/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:32:08 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 21:51:58 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strlcat(void)
{
	char buf[10];
	size_t ret;

	intro("strlcat");

	bzero(buf, 10);
	strcpy(buf, "abc");
	ft_strlcat(buf, "abcdefghijklmnop", 10);
	if (strcmp(buf, "abcabcdef"))
		return (ko_str(__LINE__, "s[10]==abc, abcdefghijklmnop, 10", \
				   buf, "abcabcdef"));
	if ((ret = ft_strlcat(buf, "abcd", 2)) != 6)
		return (ko_int(__LINE__, "s[10]==abcabcdef, abcd, 2 (return)", ret, 6));

	bzero(buf, 10);
	if ((ret = ft_strlcat(buf, "abc", 10)) != 3)
		return (ko_int(__LINE__, "s[10]==nil, abc, 10 (return)", ret, 3));
	if ((ret = ft_strlcat(buf, "def", 10)) != 6)
		return (ko_int(__LINE__, "s[10]==abc, def, 10 (return)", ret, 6));
	
	bzero(buf, 10);
	memset(buf, 'a', 10);
	if ((ret = ft_strlcat(buf, "ccc", 10)) != 13)
		return (ko_int(__LINE__, "s[10]==aaaaaaaaaa, ccc, 10 (return)", ret, 13));
	
	bzero(buf, 10);
	strcpy(buf, "abc");
	if ((ret = ft_strlcat(buf, "ccc", 0)) != 3)
		return (ko_int(__LINE__, "s[10]==abc, ccc, 0 (return)", ret, 3));

	bzero(buf, 10);
	strcpy(buf, "abc");
	if ((ret = ft_strlcat(buf, "ccc", 1)) != 4)
		return (ko_int(__LINE__, "s[10]==abc, ccc, 1 (return)", ret, 4));

	bzero(buf, 10);
	strcpy(buf, "abc");
	if ((ret = ft_strlcat(buf, "ccc", 6)) != 6)
		return (ko_int(__LINE__, "s[10]==abc, ccc, 6 (return)", ret, 6));

	bzero(buf, 10);
	strcpy(buf, "abc");
	if ((ret = ft_strlcat(buf, "ccc", 10)) != 6)
		return (ko_int(__LINE__, "s[10]==abc, ccc, 10 (return)", ret, 6));
	
	return (ok());
}
