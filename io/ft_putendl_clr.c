/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_clr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:51:30 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 18:20:30 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the char * s followed on one '\n' on stdout, with colors!
** clr = ansi espace sequence (cf libft.h for defines)
*/

#include "libft.h"
#include <unistd.h>

void	ft_putendl_clr(char *s, char *clr)
{
	ft_putstr_clr(s, clr);
	write(STDOUT_FILENO, "\n", 1);
}
