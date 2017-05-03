/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 05:25:28 by mcanal            #+#    #+#             */
/*   Updated: 2017/05/04 00:11:48 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** return the address of the first link where content == data
*/

#include "libft.h"

t_list			*ft_lstfind(t_list **alst, void *data, t_ncmp *cmp)
{
	if (!alst || !*alst)
		return (NULL);
	if (!cmp((*alst)->content, data, (*alst)->content_size))
		return (*alst);
	return (ft_lstfind(&(*alst)->next, data, cmp));
}
