/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdbl_clr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 23:12:33 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:28:09 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the double n on stdout, with colors!
** clr = ansi espace sequence (cf libft.h for defines)
*/

#include "libft.h"
#include <unistd.h>

void	ft_putdbl_clr(double nbr, char *clr) //TODO
{
	if (!clr)
		return ;
	write(STDOUT_FILENO, clr, ft_strlen(clr));
	ft_putdbl(nbr);
	write(STDOUT_FILENO, CLR_RESET, 4);
}
