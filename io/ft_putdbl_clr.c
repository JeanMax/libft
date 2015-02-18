/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdbl_clr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 23:12:33 by mcanal            #+#    #+#             */
/*   Updated: 2015/02/18 06:23:57 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print the double n on stdout, with colors!
** clr = yellow, blue, red, green, pink, sky, white, (default = grey)
*/

#include "libft.h"

void	ft_putdbl_clr(double nbr, char *clr)
{
	int		i;

	ft_putnbr_clr((int)nbr, clr);
	ft_putchar_clr('.', clr);
	nbr -= (int)nbr;
	nbr *= 10000000;
	i = 1;
	while (nbr >= 10000000)
	{
		i *= 10;
		nbr /= 10;
	}
	ft_putnbr_clr((int)nbr % (10000000 / i), clr);

}
