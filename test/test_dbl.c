/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dbl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 12:36:33 by mcanal            #+#    #+#             */
/*   Updated: 2016/05/01 12:55:00 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char buf[1024];
	double d = atof(*(av + 1));

	sprintf(buf, "%f\n", d);
	ft_putstr(buf);
	ft_putdbl(d);
	ft_putendl("");
	return (0);
}
