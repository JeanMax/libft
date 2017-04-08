/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_shellsort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:19:33 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 02:47:06 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static int cmp(const void *a, const void *b, size_t n)
{
	(void)n;
    if (*(int *)a == *(int *)b)
        return (0);
    return (*(int *)a > *(int *)b ? 1 : -1);
}

static int cmp2(const void *a, const void *b, size_t n)
{
	(void)n;
    if (*(char *)a == *(char *)b)
        return (0);
    return (*(char *)a > *(char *)b ? 1 : -1);
}

void test_shellsort()
{
	int	test[] = { 7, 8, 6, 9, 4, 1, 5, 2, 3, 0 };
	char test2[] = "tata";
	int i;

	ft_shellsort((void *)test, 10, sizeof(int), cmp);

	for (i = 0; i < 10; i++)
		MU_ASSERT(i == test[i], "array not sorted: test (%d), ctrl (%d)", test[i], i);

	ft_shellsort((void *)test2, 4, sizeof(char), cmp2);

	MU_ASSERT(!strcmp(test2, "aatt"), "tata not sorted: test (%s)", test2);
}
