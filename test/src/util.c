/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 14:19:32 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/30 00:06:49 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	intro(char *s)
{
	int space = 12 - strlen(s);

	printf("Testing %s...", s);
	while (space-- > 0)
		printf(" ");
	fflush(stdout);
}

int		ok(void)
{
	puts(OK);
	return (1);
}

int		ko_int(int line, char *desc, int test, int ctrl)
{
	printf("%s line:%d, desc:%s \n\ttest:<%d> \n\tctrl:<%d>\n", \
		   KO, line, desc, test, ctrl);
	fflush(stdout);
	return (0);
}

int		ko_str(int line, char *desc, char *test, char *ctrl)
{
	printf("%s line:%d, desc:%s \n\ttest:<%s> \n\tctrl:<%s>\n", \
		   KO, line, desc, test, ctrl);
	fflush(stdout);
	return (0);
}
