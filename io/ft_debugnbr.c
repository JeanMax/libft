/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debugnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 23:24:49 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:46:51 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allows to print an int variable preceded by its name (debug!)
*/

#include "libft.h"
#include <unistd.h>

void	ft_debugnbr(char *name, int nbr)
{
	write(STDOUT_FILENO, CLR_RED"<", 9);
	write(STDOUT_FILENO, name, ft_strlen(name));
	write(STDOUT_FILENO, ":"CLR_GREEN, 9);
	ft_putnbr(nbr);
	write(STDOUT_FILENO, CLR_RED">"CLR_RESET"\n", 14);
}
