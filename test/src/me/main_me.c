/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_me.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:34:36 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 16:01:29 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int ac, char **av)
{
	char *s;

	if (ac == 1)
	{
		printf("Total: %d\n", part1() + part2() + bonus() + me());
		return (EXIT_SUCCESS);
	}

	s = *av;
	while (*(++av))
		if (!(search_part1(*av)) && !(search_part2(*av)) \
			&& !(search_bonus(*av))	&& !(search_me(*av)))
			printf("%s: '%s' not found\nUsage: %s [function name to test]\n", \
				   s, *av, s);

	return (EXIT_SUCCESS);
}
