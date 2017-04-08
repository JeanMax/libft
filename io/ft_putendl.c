/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:51:30 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:22:44 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print a string then a \n on stdout.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (s)
		write(STDOUT_FILENO, s, ft_strlen(s));
	write(STDOUT_FILENO, "\n", 1);
}
