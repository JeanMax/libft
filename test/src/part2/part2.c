/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:14:07 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:04:29 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	*get_f_array(void)
{
	static int (*f[])(void) = 
		{
			test_itoa,
			test_memalloc,
			test_memdel,
			test_putchar,
			test_putchar_fd,
			test_putendl,
			test_putendl_fd,
			test_putnbr,
			test_putnbr_fd,
			test_putstr,
			test_putstr_fd,
			test_strclr,
			test_strdel,
			test_strequ,
			test_striter,
			test_striteri,
			test_strjoin,
			test_strmap,
			test_strmapi,
			test_strnequ,
			test_strnew,
			test_strsplit,
			test_strsub,
			test_strtrim,
			NULL
		};
	return ((void *)f);
}

static char	**get_s_array(void)
{
	static char *a[] = 
		{
			"ft_itoa",
			"ft_memalloc",
			"ft_memdel",
			"ft_putchar",
			"ft_putchar_fd",
			"ft_putendl",
			"ft_putendl_fd",
			"ft_putnbr",
			"ft_putnbr_fd",
			"ft_putstr",
			"ft_putstr_fd",
			"ft_strclr",
			"ft_strdel",
			"ft_strequ",
			"ft_striter",
			"ft_striteri",
			"ft_strjoin",
			"ft_strmap",
			"ft_strmapi",
			"ft_strnequ",
			"ft_strnew",
			"ft_strsplit",
			"ft_strsub",
			"ft_strtrim",
			NULL
		};
	return (a);
}

int		search_part2(char *s)
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

int		part2(void)
{
	int i = 0;
	int score = 0;
	int (**f)(void) = get_f_array();

	while (f[i])
		score += f[i++]();

	printf("Part2: %d/%d\n\n", score, i);
	return (score);
}
