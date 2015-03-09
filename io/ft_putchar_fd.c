/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:52:50 by mcanal            #+#    #+#             */
/*   Updated: 2015/03/09 00:42:36 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print a character on the specified file descriptor.
*/

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	if ((write(fd, &c, 1)) == -1)
		return ;
}
