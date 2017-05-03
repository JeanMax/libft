/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc </var/spool/mail/mc>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 00:30:12 by mc                #+#    #+#             */
/*   Updated: 2017/05/03 20:18:10 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST
# define LIBFT_TEST

# include "minunit.h"

//clang throw a warning without the proto, gcc throw an error with it :/
# include "libft_copy.h"

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>

/*
** arr
*/

/*
** bst
*/

/*
** hash
*/

/*
** int
*/
void test_isalnum(void);
void test_isdigit(void);
void test_tolower(void);
void test_isalpha(void);
void test_isprint(void);
void test_toupper(void);
void test_isascii(void);
void test_itoa(void);
void test_islower(void);
void test_isgraph(void);
void test_ispunct(void);
void test_isupper(void);
void test_iscntrl(void);
void test_isspace(void);
void test_isxdigit(void);
void test_isblank(void);
void test_min(void);
void test_max(void);
void test_abs(void);

/*
** io
*/
void test_get_next_line(void);
void test_putnbr(void);
void test_putchar(void);
void test_putnbr_fd(void);
void test_putchar_fd(void);
void test_putstr(void);
void test_putendl(void);
void test_putstr_fd(void);
void test_putendl_fd(void);
void test_debugchar(void);
void test_debugstr(void);
void test_debugnbr(void);
void test_debugdbl(void);
void test_putchar_clr(void);
void test_putstr_clr(void);
void test_putendl_clr(void);
void test_putnbr_clr(void);
void test_putdbl_clr(void);
void test_putdbl(void);
void test_putdbl_fd(void);

/*
** lst1
*/
void test_lstadd(void);
void test_lstdelone(void);
void test_lstmap(void);
void test_lstdel(void);
void test_lstiter(void);
void test_lstnew(void);
void test_lstlast(void);
void test_lstinser(void);
void test_lstfind(void);
void test_lstisn(void);
void test_lstat(void);
void test_lstdellink(void);
void test_lstrplc(void);
void test_lstaddlast(void);
void test_lstlen(void);

/*
** lst2
*/

/*
** mem
*/
void test_bzero(void);
void test_memcmp(void);
void test_memset(void);
void test_memalloc(void);
void test_memcpy(void);
void test_shellsort(void);
void test_memccpy(void);
void test_memdel(void);
void test_memchr(void);
void test_memmove(void);
void test_swap(void);
void test_realloc(void);

/*
** str
*/
void test_atoi(void);
void test_striter(void);
void test_strncpy(void);
void test_strcat(void);
void test_striteri(void);
void test_strnequ(void);
void test_strchr(void);
void test_strjoin(void);
void test_strnew(void);
void test_strclr(void);
void test_strlcat(void);
void test_strnstr(void);
void test_strcmp(void);
void test_strlen(void);
void test_strrchr(void);
void test_strcpy(void);
void test_strmap(void);
void test_strsplit(void);
void test_strdel(void);
void test_strmapi(void);
void test_strstr(void);
void test_strdup(void);
void test_strncat(void);
void test_strsub(void);
void test_strequ(void);
void test_strncmp(void);
void test_strtrim(void);
void test_istoobig(void);
void test_strndup(void);

#endif
