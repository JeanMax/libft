/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_clr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 23:19:06 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:20:08 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the char * s on stdout, with colors!
** clr = ansi espace sequence (cf libft.h for defines)
*/

#include "libft.h"
#include <unistd.h>

void			ft_putstr_clr(char *s, char *clr)
{
	if (!s || !clr)
		return ;
	write(STDOUT_FILENO, clr, ft_strlen(clr));
	write(STDOUT_FILENO, s, ft_strlen(s));
	write(STDOUT_FILENO, CLR_RESET, 4);
}
