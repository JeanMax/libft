/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 22:22:00 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 22:43:43 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strnstr(void)
{
	char	buf[11];
	char	*ret;

	intro("strnstr");

	bzero(buf, 11);
	strcpy(buf, "un deux 9");
	if (strcmp(ft_strnstr(buf, "deux", 10), "deux 9"))
		return (ko_str(__LINE__, "un deux 9, deux, 10", buf, "deux 9"));
	if ((ret = ft_strnstr(buf, "9", 3)))
		return (ko_str(__LINE__, "un deux 9, 9, 3 (return)", ret, "nil"));
	if (strcmp(ft_strnstr(buf, "", 6), buf))
		return (ko_str(__LINE__, "un deux 9, nil, 6", buf, "un deux 9"));
	if ((ret = ft_strnstr(buf, "un deux", 5)))
		return (ko_str(__LINE__, "deux 9, un deux, 5 (return)", ret, "nil"));
	if (strcmp(ft_strnstr(buf, "9", 10), "9"))
		return (ko_str(__LINE__, "un deux 9, 9, 10", buf, "9"));
	if ((ret = ft_strnstr(buf, "9", 8)))
		return (ko_str(__LINE__, "un deux 9, 9, 8 (return)", ret, "nil"));

	bzero(buf, 11);
	strcpy(buf, "un deux 96");
	if (strcmp(ft_strnstr(buf, "deux", 10), "deux 96"))
		return (ko_str(__LINE__, "un deux 96, deux, 10", buf, "deux 96"));
	if ((ret = ft_strnstr(buf, "cinq", 10)))
		return (ko_str(__LINE__, "un deux 96, cinq, 10 (return)", ret, "nil"));
	if ((ret = ft_strnstr(buf, "9682", 10)))
		return (ko_str(__LINE__, "un deux 96, 9682, 10 (return)", ret, "nil"));
	if (strcmp(ft_strnstr(buf, "6", 10), "6"))
		return (ko_str(__LINE__, "un deux 96, 6, 10", buf, "6"));

	bzero(buf, 11);
	strcpy(buf, "u\0 deux 96");
	if ((ret = ft_strnstr(buf, "deux", 10)))
		return (ko_str(__LINE__, "u\\0 deux 96, deux, 10 (return)", ret, "nil"));

	return (ok());
}
