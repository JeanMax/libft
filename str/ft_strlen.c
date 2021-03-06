/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:21:34 by mcanal            #+#    #+#             */
/*   Updated: 2015/12/05 21:39:17 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strlen() function calculates the length of the string s, excluding
** the terminating null byte ('\0').
*/

#include "libft.h"

size_t			ft_strlen(const char *str)
{
	const char	*tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	return (size_t)(tmp - str);
}
