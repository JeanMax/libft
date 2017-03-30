/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_shellsort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 23:19:33 by mcanal            #+#    #+#             */
/*   Updated: 2015/12/03 03:49:53 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int cmp(const void *a, const void *b)
{
    if (*(int *)a == *(int *)b)
        return (0);
    return (*(int *)a > *(int *)b ? 1 : -1);
}

static int cmp2(const void *a, const void *b)
{
    if (*(char *)a == *(char *)b)
        return (0);
    return (*(char *)a > *(char *)b ? 1 : -1);
}

int		test_shellsort(void)
{
	int	test[] = { 7, 8, 6, 9, 4, 1, 5, 2, 3, 0 };
	char test2[] = "tata";
	int i;

	intro("shellsort");


	ft_shellsort((void *)test, 10, sizeof(int), cmp);

	for (i = 0; i < 10; i++)
		if (i != test[i])
			return (ko_int(__LINE__, "ouch", test[i], i));


	ft_shellsort((void *)test2, 4, sizeof(char), cmp2);

	if (strcmp(test2, "aatt"))
		return (ko_str(__LINE__, "ouch", test2, "aatt"));


	return (ok());
}
