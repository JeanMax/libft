/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_hash.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 04:20:19 by mcanal            #+#    #+#             */
/*   Updated: 2016/05/24 00:46:44 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"
#include <stdio.h>
#include <stdlib.h>

static void stupid_free(void *content, size_t content_size)
{
	(void)content_size;
	free(content);
}

int		main(void)
{
	t_htable	*table = ft_hnew(1);
    /* char *key = ft_strdup("toto"); */
    /* char *val = ft_strdup("tata"); */

	/* table->key_del = stupid_free; */
	/* table->value_del = stupid_free; */

	/* ft_hset(table, key, val); */

	table->value_size = sizeof(int);

	ft_hset(table, "toto", (void *)(t_ulong)4);
	ft_hset(table, "toto", (void *)(t_ulong)-42);
	ft_hset(table, "totota", (void *)(t_ulong)54);

	ft_debugnbr("toto", (int)ft_hget(table, "toto"));
	ft_hdelone(table, "toto");

	ft_debugnbr("totota", (int)ft_hget(table, "totota"));


	ft_hdel(&table);

	return (0);
}
