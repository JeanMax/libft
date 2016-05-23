/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 04:40:23 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/27 22:42:44 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** insert the link (new) after the link (alst).
*/

#include "libft.h"

void	ft_linser(t_lst **alst, t_lst *new)
{
	if (!alst || !new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	new->next = (*alst)->next;
	new->prev = *alst;
	(*alst)->next = new;
	if (new->next != NULL)
		new->next->prev = new;
}
