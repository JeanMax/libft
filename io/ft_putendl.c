/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:51:30 by mcanal            #+#    #+#             */
/*   Updated: 2015/03/09 00:42:04 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print a string then a \n on stdout.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	if ((write(1, s, ft_strlen(s))) == -1)
		return ;
	if ((write(1, "\n", 1)) == -1)
		return ;
}
