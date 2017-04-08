/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_clr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 23:12:33 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:26:59 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the int n on stdout, with colors!
** clr = ansi espace sequence (cf libft.h for defines)
*/

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_clr(int nbr, char *clr)
{
	if (!clr)
		return ;
	write(STDOUT_FILENO, clr, ft_strlen(clr));
	ft_putnbr(nbr);
	write(STDOUT_FILENO, CLR_RESET, 4);
}
