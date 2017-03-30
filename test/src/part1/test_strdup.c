/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:48:48 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:51:43 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		 test_strdup(void)
{
	char	*test;
	char	*ctrl;

	intro("strdup");

	ctrl = strdup("test_strdup");
	test = ft_strdup("test_strdup");
	if (strcmp(test, ctrl))
		return (ko_str(__LINE__, "test_strdup", test, ctrl));
	ctrl ? free(ctrl) : (void)0;
	test ? free(test) : (void)0;

	ctrl = strdup("");
	test = ft_strdup("");
	if (strcmp(test, ctrl))
		return (ko_str(__LINE__, "nil", test, ctrl));
	ctrl ? free(ctrl) : (void)0;
	test ? free(test) : (void)0;

	return (ok());
}
