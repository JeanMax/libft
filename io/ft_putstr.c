/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:55:19 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:23:19 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print a string on stdout.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putstr(char const *s)
{
	if (s)
		write(STDOUT_FILENO, s, ft_strlen(s));
}
