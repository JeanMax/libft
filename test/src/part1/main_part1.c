/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:14:51 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 14:10:09 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	char *s;

	if (ac == 1)
	{
		printf("Total: %d\n", part1());
		return (EXIT_SUCCESS);
	}

	s = *av;
	while (*(++av))
		if (!(search_part1(*av)))
			printf("%s: '%s' not found\nUsage: %s [function name to test]\n", \
				   s, *av, s);

	return (EXIT_SUCCESS);
}
