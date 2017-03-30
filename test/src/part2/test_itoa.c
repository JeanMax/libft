/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:54:01 by mcanal            #+#    #+#             */
/*   Updated: 2015/12/18 00:40:19 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_itoa(void)
{
	char	*ret;

	intro("itoa");

	ret = ft_itoa(0);
	if (strcmp(ret, "0"))
		return (ko_str(__LINE__, "0", ret, "0"));
	*ret ? free(ret) : (void)0;

	ret = ft_itoa(21);
	if (strcmp(ret, "21"))
		return (ko_str(__LINE__, "21", ret, "21"));
	*ret ? free(ret) : (void)0;

	ret = ft_itoa(123);
	if (strcmp(ret, "123"))
		return (ko_str(__LINE__, "123", ret, "123"));
	*ret ? free(ret) : (void)0;

	ret = ft_itoa(-123);
	if (strcmp(ret, "-123"))
		return (ko_str(__LINE__, "-123", ret, "-123"));
	*ret ? free(ret) : (void)0;

	ret = ft_itoa(21);
	if (strcmp(ret, "21"))
		return (ko_str(__LINE__, "21", ret, "21"));
	*ret ? free(ret) : (void)0;

	ret = ft_itoa(-2147483648);
	if (strcmp(ret, "-2147483648"))
		return (ko_str(__LINE__, "-2147483648", ret, "-2147483648"));
	*ret ? free(ret) : (void)0;

	ret = ft_itoa(2147483647);
	if (strcmp(ret, "2147483647"))
		return (ko_str(__LINE__, "2147483647", ret, "2147483647"));
	*ret ? free(ret) : (void)0;

	return (ok());
}
