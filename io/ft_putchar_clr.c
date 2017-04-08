/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_clr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:53:08 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:22:16 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the char c on stdout, with colors!
** clr = yellow, blue, red, green, pink, sky, white, (default = grey)
*/

#include "libft.h"
#include <unistd.h>

void	ft_putchar_clr(char c, char *clr)
{
	if (!clr)
		return ;
	write(STDOUT_FILENO, clr, ft_strlen(clr));
	write(STDOUT_FILENO, &c, 1);
	write(STDOUT_FILENO, CLR_RESET, 4);
}
