/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:39:11 by mcanal            #+#    #+#             */
/*   Updated: 2015/12/05 21:30:26 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  memchr()  function  scans  the  initial n bytes of the memory area
** pointed to by s for the first instance of c.  Both c and the  bytes  of
** the memory area pointed to by s are interpreted as unsigned char.
*/

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s = (char *)s + 1;
	}
	return (NULL);
}
