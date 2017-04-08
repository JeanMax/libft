/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 00:02:06 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 21:51:25 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void	free_array(char **t)
{
	char	**swap;

	swap = t;
	while (*t)
		free(*(t++));
	free(*t);
	free(swap);
}

void test_strsplit()
{
	char	**tt;

	tt = ft_strsplit("***salut****!**", '*');
	MU_ASSERT(!strcmp(tt[0], "salut"), \
			  "test (%s) and ctrl (%s) differ", tt[0], "salut");
	MU_ASSERT(!strcmp(tt[1], "!"), \
			  "test (%s) and ctrl (%s) differ", tt[1], "!");
	MU_ASSERT(!tt[2], "ptr (%s) non NULL", tt[2]);
	free_array(tt);

	tt = ft_strsplit("*****", '*');
	MU_ASSERT(!tt[0], "ptr (%s) non NULL", tt[0]);
	free_array(tt);

	tt = ft_strsplit("coucou", '*');
	MU_ASSERT(!strcmp(tt[0], "coucou"), \
			  "test (%s) and ctrl (%s) differ", tt[0], "coucou");
	MU_ASSERT(!tt[1], "ptr (%s) non NULL", tt[1]);
	free_array(tt);

	tt = ft_strsplit("salut****", '*');
	MU_ASSERT(!strcmp(tt[0], "salut"), \
			  "test (%s) and ctrl (%s) differ", tt[0], "salut");
	MU_ASSERT(!tt[1], "ptr (%s) non NULL", tt[1]);
	free_array(tt);

	tt = ft_strsplit("****salut", '*');
	MU_ASSERT(!strcmp(tt[0], "salut"), \
			  "test (%s) and ctrl (%s) differ", tt[0], "salut");
	MU_ASSERT(!tt[1], "ptr (%s) non NULL", tt[1]);
	free_array(tt);

	tt = ft_strsplit("", '*');
	MU_ASSERT(tt, "ptr NULL");
	MU_ASSERT(!tt[0], "ptr (%s) non NULL", tt[0]);
	free_array(tt);
}
