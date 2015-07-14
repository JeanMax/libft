/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 13:01:52 by mcanal            #+#    #+#             */
/*   Updated: 2015/07/15 00:01:28 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Similar to ft_strchr, but return an int (index) indicating the position of
** first character searched and found in the string.
** Returns -1 if fail.
*/

#include "libft.h"

int		ft_strindex(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != (char)c)
	{
		if (!*s)
			return (-1);
		i++;
		s++;
	}
	return (i);
}
