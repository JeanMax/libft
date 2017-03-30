/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 22:15:46 by mcanal            #+#    #+#             */
/*   Updated: 2016/05/24 00:43:09 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"
#include <stdio.h>
#include <stdlib.h>

enum e_type
{
	INT = 0,
	CHAR = 1,
	STR = 2
};

static void		debug_int(void *a, size_t i)
{
	int *swap = (int *)a;
	while (i--)
		ft_debugnbr("int", *(swap++));
}
static void		debug_char(void *a, size_t i)
{
	char *swap = (char *)a;
	if (i)
		ft_debugstr("char", swap);
}
static void		debug_str(void *a, size_t i)
{
	char **swap = (char **)a;
	while (i--)
		ft_debugstr("str", *(swap++));
}
static void		debug_arr(t_arr *arr, char *zob, int type)
{
	void	(* const f[])(void *, size_t) = {debug_int, debug_char, debug_str};
	ft_debugstr("debug", zob);
	ft_debugnbr("length", arr->length);
	ft_debugnbr("sizeof_element", arr->sizeof_element);
	ft_debugnbr("alloc_len", arr->alloc_len);
	f[type](arr->ptr, arr->length);
}


static int		cmp_str(const void *a, const void *b, size_t n)
{
	(void)n;
	return (ft_strcmp(*(char **)a, *(char **)b));
}

static void		*cpy_str(void *dest, const void *src, size_t n)
{
	char	**swap;

	(void)n;
	swap = (char **)dest;
	*swap = ft_strdup(*(char **)src);
	return (dest);
	/* ft_strcpy(*(char **)dest, *(char **)src); */
}

static void		del_str(void *content, size_t content_size)
{
	char	**swap;

	(void)content_size;
	swap = (char **)content;
	ft_memdel((void *)swap);
	/* *swap = NULL; */
}



static void test_int(void)
{
	t_arr *tarr;
	t_arr *dup;
	int	*a;
	int	*b;

	tarr = ft_arrnew(10, sizeof(int));
	a = tarr->ptr;
	for (int i = 0; i < 10; i++)
		ft_arrpush(tarr, (void *)(t_ulong)-i, -1);

	dup = ft_arrdup(tarr);
	b = dup->ptr;
	b[0] = 5;

	ft_arrslice(tarr, 2, -2, -3);

	debug_arr(tarr, "tarr", INT);


	ft_arrclean(&tarr);	ft_arrclean(&dup);	return;

	debug_arr(dup, "dup", INT);
	ft_arrswap(dup, -1, 0);

	ft_debugnbr("get", *(int *)ft_arrget(tarr, -1));
	while (dup->length)
		ft_debugnbr("pop", (int)ft_arrpop(dup, -1));

	ft_arrclean(&tarr);
	ft_arrclean(&dup);
}

static void test_char(void)
{
	t_arr *tarr;
	t_arr *dup;
	char	*a;
	char	*b;

	tarr = ft_arrnew(ft_strlen("toto") + 1, sizeof(char));
	a = tarr->ptr;
	ft_strcpy(a, "toto"); //push
	tarr->length = ft_strlen("toto"); //bad idea...

	dup = ft_arrdup(tarr);
	b = dup->ptr;
	ft_debugnbr("eq", ft_arrequ(tarr, dup));
	b[0] = b[2] = 'z';
	ft_debugnbr("eq", ft_arrequ(tarr, dup));

	ft_arrmult(dup, 10);

	debug_arr(tarr, "tarr", CHAR);
	debug_arr(dup, "dup", CHAR);
	ft_arrsort(tarr);
	debug_arr(tarr, "tarr", CHAR);

	ft_arrclean(&tarr);
	ft_arrclean(&dup);
}

static void test_str(void)
{
	t_arr *tarr;
	t_arr *dup;
	char	**a;
	char	**b;

	tarr = ft_arrnew(3, sizeof(char *));
	tarr->cmp = cmp_str;
	tarr->cpy = cpy_str;
	tarr->del = del_str;

	for (int i = 0; i < 9; i++)
		ft_arrpush(tarr, "zboub", 0);

	ft_arrpush(tarr, "tob", -3);
	a = tarr->ptr;
	dup = ft_arrdup(tarr);
	ft_debugnbr("eq", ft_arrequ(tarr, dup));
	b = dup->ptr;
	ft_strcpy(b[0], "zgegd");
	ft_debugnbr("eq", ft_arrequ(tarr, dup));

	debug_arr(tarr, "tarr", STR);
	debug_arr(dup, "dup", STR);

	ft_debugstr("get", *(char **)ft_arrget(tarr, 0));

	char *pop;
	while (dup->length > 3)
	{
		pop = (char *)ft_arrpop(dup, -1);
		ft_debugstr("pop", pop);
		ft_memdel((void *)&pop);
	}

	char *find;
	if ((find = (char *)ft_arrfind(tarr, "tob")))
		ft_debugstr("find", find);


	debug_arr(tarr, "tarr", STR);
	debug_arr(dup, "dup", STR);
	if (ft_arrjoin(tarr, dup))
		ft_arrclean(&dup);
	debug_arr(tarr, "jointarr", STR);

	ft_arrclean(&tarr);
	ft_arrclean(&dup);
}

int				main(void)
{
	test_int();
	/* test_char(); */
	/* test_str(); */

	return (0);
}
