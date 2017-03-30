/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   me.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:00:44 by mcanal            #+#    #+#             */
/*   Updated: 2016/04/03 11:20:37 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	*get_f_array(void)
{
	static int (*f[])(void) =
		{
			test_shellsort,
			test_get_next_line,
			NULL
		};
	return ((void *)f);
}

static char	**get_s_array(void)
{
	static char *a[] =
		{
			"ft_shellsort",
			"get_next_line",
			NULL
		};
	return (a);
}

int		search_me(char *s)
{
	int (**f)(void) = get_f_array();
	char **a = get_s_array();

	while (*a && *f)
	{
		if (!strcmp(s, *a))
		{
			(*f)();
			return (1);
		}
		a++;
		f++;
	}

	return (0);
}

int		me(void)
{
	int i = 0;
	int score = 0;
	int (**f)(void) = get_f_array();

	while (f[i])
		score += f[i++]();

	printf("Me: %d/%d\n\n", score, i);
	return (score);
}

