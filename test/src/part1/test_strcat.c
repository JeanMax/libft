/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:25:50 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 19:31:40 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_strcat(void)
{
	intro("strcat");

    char    src[] = "test_strcat";
    char    test[42];
    char    ctrl[42];
    char    *ret = NULL;

    bzero(test, 42);
    bzero(ctrl, 5);
    ret = ft_strcat(test, src);
    if (strcmp(test, strcat(ctrl, src)))
		return (ko_str(__LINE__, "s[42]==nil, test_strcat", test, ctrl));
    if (ret != test || strcmp(test, ret))
		return (ko_str(__LINE__, "s[42]==nil, test_strcat (return)", test, ret));

    bzero(test, 20);
    bzero(ctrl, 20);
    strcpy(test, "toto");
    strcpy(ctrl, "toto");
    ret = ft_strcat(test, src);
    if (strcmp(test, strcat(ctrl, src)))
		return (ko_str(__LINE__, "s[42]==toto, test_strcat", test, ctrl));
    if (ret != test || strcmp(test, ret))
		return (ko_str(__LINE__, "s[42]==toto, test_strcat (return)", test, ret));
	
	return (ok());
}
