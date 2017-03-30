/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:04:12 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:22:02 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	*get_f_array(void)
{
	static int (*f[])(void) = 
		{
			test_lstadd,
			test_lstdel,
			test_lstdelone,
			test_lstiter,
			test_lstmap,
			test_lstnew,
			NULL
		};
	return ((void *)f);
}

static char	**get_s_array(void)
{
	static char *a[] = 
		{
			"ft_lstadd",
			"ft_lstdel",
			"ft_lstdelone",
			"ft_lstiter",
			"ft_lstmap",
			"ft_lstnew",
			NULL
		};
	return (a);
}

int		search_bonus(char *s)
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

int		bonus(void)
{
	int i = 0;
	int score = 0;
	int (**f)(void) = get_f_array();

	while (f[i])
		score += f[i++]();

	printf("Bonus: %d/%d\n\n", score, i);
	return (score);
}

