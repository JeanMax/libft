/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:53:08 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:24:08 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print a character on stdout.
*/

#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
