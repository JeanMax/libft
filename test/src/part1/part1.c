/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:09:49 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 23:34:12 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	*get_f_array(void)
{
	static int (*f[])(void) = 
		{
			test_atoi, 
			test_bzero,
			test_isalnum,
			test_isalpha,
			test_isascii,
			test_isdigit,
			test_isprint,
			test_memccpy,
			test_memchr,
			test_memcmp,
			test_memcpy,
			test_memmove,
			test_memset,
			test_strcat,
			test_strchr,
			test_strcmp,
			test_strcpy,
			test_strdup,
			test_strlcat,
			test_strlen,
			test_strncat,
			test_strncmp,
			test_strncpy,
			test_strnstr,
			test_strrchr,
			test_strstr,
			test_tolower,
			test_toupper,
			NULL
		};
	return ((void *)f);
}

static char	**get_s_array(void)
{
	static char *a[] = 
		{
			"ft_atoi", 
			"ft_bzero",
			"ft_isalnum",
			"ft_isalpha",
			"ft_isascii",
			"ft_isdigit",
			"ft_isprint",
			"ft_memccpy",
			"ft_memchr",
			"ft_memcmp",
			"ft_memcpy",
			"ft_memmove",
			"ft_memset",
			"ft_strcat",
			"ft_strchr",
			"ft_strcmp",
			"ft_strcpy",
			"ft_strdup",
			"ft_strlcat",
			"ft_strlen",
			"ft_strncat",
			"ft_strncmp",
			"ft_strncpy",
			"ft_strnstr",
			"ft_strrchr",
			"ft_strstr",
			"ft_tolower",
			"ft_toupper",
			NULL
		};
	return (a);
}

int		search_part1(char *s)
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

int		part1(void)
{
	int i = 0;
	int score = 0;
	int (**f)(void) = get_f_array();

	while (f[i])
		score += f[i++]();

	printf("Part1: %d/%d\n\n", score, i);
	return (score);
}
