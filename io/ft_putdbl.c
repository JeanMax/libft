/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/18 05:46:14 by mcanal            #+#    #+#             */
/*   Updated: 2015/02/18 06:15:29 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** print a double on stdout
*/

#include "libft.h"

void			ft_putdbl(double nbr)
{
	int			i;

	ft_putnbr((int)nbr);
	ft_putchar('.');
	nbr -= (int)nbr;
	nbr *= 10000000;
	i = 1;
	while (nbr >= 10000000)
	{
		i *= 10;
		nbr /= 10;
	}
	ft_putnbr((int)nbr % (10000000 / i));
}
