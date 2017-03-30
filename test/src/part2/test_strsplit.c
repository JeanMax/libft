/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:06 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 02:19:39 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	free_array(char **t)
{
	char	**swap;

	swap = t;
	while (*t)
		free(*(t++));
	free(*t);
	free(swap);
}

int		test_strsplit(void)
{
	char	**tt;

	intro("strsplit");

	tt = ft_strsplit("***salut****!**", '*');
	if (strcmp(tt[0], "salut"))
		return (ko_str(__LINE__, "***salut****!**, *", tt[0], "salut"));
	if (strcmp(tt[1], "!"))
		return (ko_str(__LINE__, "***salut****!**, *", tt[1], "!"));
	if (tt[2])
		return (ko_str(__LINE__, "***salut****!**, *", tt[2], "nil"));
	free_array(tt);

	tt = ft_strsplit("*****", '*');
	if (tt[0])
		return (ko_str(__LINE__, "*****, *", tt[0], "nil"));
	free_array(tt);

	tt = ft_strsplit("coucou", '*');
	if (strcmp(tt[0], "coucou"))
		return (ko_str(__LINE__, "coucou, *", tt[0], "coucou"));
	if (tt[1])
		return (ko_str(__LINE__, "coucou, *", tt[1], "nil"));
	free_array(tt);

	tt = ft_strsplit("salut****", '*');
	if (strcmp(tt[0], "salut"))
		return (ko_str(__LINE__, "salut****, *", tt[0], "salut"));
	if (tt[1])
		return (ko_str(__LINE__, "salut****, *", tt[1], "nil"));
	free_array(tt);

	tt = ft_strsplit("****salut", '*');
	if (strcmp(tt[0], "salut"))
		return (ko_str(__LINE__, "****salut, *", tt[0], "salut"));
	if (tt[1])
		return (ko_str(__LINE__, "****salut, *", tt[1], "nil"));
	free_array(tt);

	tt = ft_strsplit("", '*');
	if (!tt || tt[0])
		return (ko_str(__LINE__, "nil, *", "non", "nil"));
	free_array(tt);

	return (ok());
}
