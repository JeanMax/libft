/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ladd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 02:27:33 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/27 22:42:41 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** add a link at the head of the list
** alst is the first element of the list
** the function assumes there is at least one element in the list
*/

#include "libft.h"

void			ft_ladd(t_lst **alst, t_lst *new)
{
	if (!new || !alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	new->next = *alst;
	(*alst)->prev = new;
	new->prev = NULL;
	*alst = new;
}
