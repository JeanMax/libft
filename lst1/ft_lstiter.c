/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 02:29:26 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/28 18:24:05 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** apply the function f to each link of the list
*/

#include "libft.h"

void			ft_lstiter(t_list *alst, void (*f)(t_list *elem))
{
	if (!alst)
		return ;
	f(alst);
	ft_lstiter(alst->next, f);
}
