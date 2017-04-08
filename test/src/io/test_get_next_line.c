/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 11:23:44 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/07 16:34:02 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_get_next_line()
{
	char	*line;
	int		out;
	int		p[2];
	int		fd;
	int		i;
	char	*inputs[] = {
		"aaa",
		"bbb",
		"",
		"ccc",
		NULL
	};

	fd = STDOUT_FILENO;
	out = dup(fd);
	pipe(p);
	dup2(p[1], fd);

	for (i = 0; inputs[i]; i++) {
		write(fd, inputs[i], strlen(inputs[i]));
		write(fd, "\n", 1);
	}

	dup2(out, fd);
	close(p[1]);

	for (i = 0; inputs[i]; i++) {
		line = NULL;
		get_next_line(p[0], &line);
		MU_ASSERT_FATAL(line, "ptr NULL");
		MU_ASSERT(!strcmp(line, inputs[i]), \
				  "test (%s) and ctrl (%s) differ", line, inputs[i]);
		free(line);
	}
}
