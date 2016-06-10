/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:07:11 by mcanal            #+#    #+#             */
/*   Updated: 2016/06/10 18:19:27 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return a line read in a file descriptor.
** The first one parametre is the file descriptor, the second parametre is
** the address of a string which will store the line read on the file
** descriptor. The return value can be 1, 0 or -1 as a line has been read,
** as the reading is done, either that an error happened respectively.
*/

#include "libft.h"
#include <unistd.h>

# define BUFF_SIZE		127

static int		dup_line(t_arr *arr, char **line)
{
	if (!(*line = ft_strdup(arr->ptr)))
		return (-1);
	while ((char)(long)(void *)ft_arrpop(arr, 0))
		;
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	ssize_t			ret;
	char			buf[BUFF_SIZE];
	char			*swap;
	static t_arr	*arr = NULL;

	if (fd < 0 || !line)
		return (-1);
	if (!arr)
		arr = ft_arrnew(BUFF_SIZE + 1, sizeof(char));
	else if (ft_memchr(arr->ptr, 0, arr->length))
		return (dup_line(arr, line));
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		swap = buf;
		while (swap != buf + ret)
		{
			if (*swap == '\n')
				*swap = 0;
			ft_arrpush(arr, (void *)(long)*(swap++), -1);
		}
		if (ft_memchr(buf, 0, (size_t)ret))
			return (dup_line(arr, line));
	}
	return ((int)ret);
}
