/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 13:23:15 by mcanal            #+#    #+#             */
/*   Updated: 2016/04/03 11:21:18 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

/*
** define
*/
# define HEADER_H
# define OK "\033[32;01mOK\033[0m"
# define KO "\033[31;01mKO\033[0m"

/*
** include
*/
# include "truc.h"
/* # include "libft.h" */
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>


/*
** prototypes
**  -util.c
*/
void	intro(char *s);
int		ok(void);
int		ko_int(int line, char *desc, int test, int ctrl);
int		ko_str(int line, char *desc, char *test, char *ctrl);


/*
**  -part1
*/
int		part1(void);
int		search_part1(char *s);
int		test_atoi(void);
int		test_bzero(void);
int		test_isalnum(void);
int		test_isalpha(void);
int		test_isascii(void);
int		test_isdigit(void);
int		test_isprint(void);
int		test_memccpy(void);
int		test_memchr(void);
int		test_memcmp(void);
int		test_memcpy(void);
int		test_memmove(void);
int		test_memset(void);
int		test_strcat(void);
int		test_strchr(void);
int		test_strcmp(void);
int		test_strcpy(void);
int		test_strdup(void);
int		test_strlcat(void);
int		test_strlen(void);
int		test_strncat(void);
int		test_strncmp(void);
int		test_strncpy(void);
int		test_strnstr(void);
int		test_strrchr(void);
int		test_strstr(void);
int		test_tolower(void);
int		test_toupper(void);


/*
**  -part2
*/
int		part2(void);
int		search_part2(char *s);
int		test_itoa(void);
int		test_memalloc(void);
int		test_memdel(void);
int		test_putchar(void);
int		test_putchar_fd(void);
int		test_putendl(void);
int		test_putendl_fd(void);
int		test_putnbr(void);
int		test_putnbr_fd(void);
int		test_putstr(void);
int		test_putstr_fd(void);
int		test_strclr(void);
int		test_strdel(void);
int		test_strequ(void);
int		test_striter(void);
int		test_striteri(void);
int		test_strjoin(void);
int		test_strmap(void);
int		test_strmapi(void);
int		test_strnequ(void);
int		test_strnew(void);
int		test_strsplit(void);
int		test_strsub(void);
int		test_strtrim(void);


/*
**  -bonus
*/
int		bonus(void);
int		search_bonus(char *s);
int		test_lstadd(void);
int		test_lstdel(void);
int		test_lstdelone(void);
int		test_lstiter(void);
int		test_lstmap(void);
int		test_lstnew(void);


/*
**  -me
*/
int		me(void);
int		search_me(char *s);
int		test_shellsort(void);
int		test_get_next_line(void);

#endif
