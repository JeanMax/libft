/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jenkins_hash.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 16:48:55 by mc                #+#    #+#             */
/*   Updated: 2017/09/13 16:49:22 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** jenkins hash implementation used in hash tables
*/

#include "libft.h"

size_t		ft_jenkins_hash(const void *content, size_t content_size)
{
	size_t	hash;
	t_uchar	*swap;

	hash = 0;
	swap = (t_uchar *)content;
	while (content_size--)
	{
		hash += *(swap++);
		hash += (hash << 10);
		hash ^= (hash >> 6);
	}
	hash += (hash << 3);
	hash ^= (hash >> 11);
	return (hash + (hash << 15));
}
