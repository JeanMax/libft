/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dummy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mc <mc.maxcanal@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 20:57:38 by mc                #+#    #+#             */
/*   Updated: 2017/04/05 21:01:58 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minunit.h"

/*
** int
*/
MU_DUMMY_FUN(ft_isalnum);
MU_DUMMY_FUN(ft_isdigit);
MU_DUMMY_FUN(ft_tolower);
MU_DUMMY_FUN(ft_isalpha);
MU_DUMMY_FUN(ft_isprint);
MU_DUMMY_FUN(ft_toupper);
MU_DUMMY_FUN(ft_isascii);
MU_DUMMY_FUN(ft_itoa);

/*
** io
*/
MU_DUMMY_FUN(ft_putnbr);
MU_DUMMY_FUN(ft_putchar);
MU_DUMMY_FUN(ft_putnbr_fd);
MU_DUMMY_FUN(ft_putchar_fd);
MU_DUMMY_FUN(ft_putstr);
MU_DUMMY_FUN(ft_putendl);
MU_DUMMY_FUN(ft_putstr_fd);
MU_DUMMY_FUN(ft_putendl_fd);

/*
** lst1
*/
MU_DUMMY_FUN(ft_lstadd);
MU_DUMMY_FUN(ft_lstdelone);
MU_DUMMY_FUN(ft_lstmap);
MU_DUMMY_FUN(ft_lstdel);
MU_DUMMY_FUN(ft_lstiter);
MU_DUMMY_FUN(ft_lstnew);

/*
** mem
*/
MU_DUMMY_FUN(ft_bzero);
MU_DUMMY_FUN(ft_memcmp);
MU_DUMMY_FUN(ft_memset);
MU_DUMMY_FUN(ft_memalloc);
MU_DUMMY_FUN(ft_memcpy);
MU_DUMMY_FUN(ft_memccpy);
MU_DUMMY_FUN(ft_memdel);
MU_DUMMY_FUN(ft_memchr);
MU_DUMMY_FUN(ft_memmove);

/*
** str
*/
MU_DUMMY_FUN(ft_atoi);
MU_DUMMY_FUN(ft_striter);
MU_DUMMY_FUN(ft_strncpy);
MU_DUMMY_FUN(ft_strcat);
MU_DUMMY_FUN(ft_striteri);
MU_DUMMY_FUN(ft_strnequ);
MU_DUMMY_FUN(ft_strchr);
MU_DUMMY_FUN(ft_strjoin);
MU_DUMMY_FUN(ft_strnew);
MU_DUMMY_FUN(ft_strclr);
MU_DUMMY_FUN(ft_strlcat);
MU_DUMMY_FUN(ft_strnstr);
MU_DUMMY_FUN(ft_strcmp);
MU_DUMMY_FUN(ft_strlen);
MU_DUMMY_FUN(ft_strrchr);
MU_DUMMY_FUN(ft_strcpy);
MU_DUMMY_FUN(ft_strmap);
MU_DUMMY_FUN(ft_strsplit);
MU_DUMMY_FUN(ft_strdel);
MU_DUMMY_FUN(ft_strmapi);
MU_DUMMY_FUN(ft_strstr);
MU_DUMMY_FUN(ft_strdup);
MU_DUMMY_FUN(ft_strncat);
MU_DUMMY_FUN(ft_strsub);
MU_DUMMY_FUN(ft_strequ);
MU_DUMMY_FUN(ft_strncmp);
MU_DUMMY_FUN(ft_strtrim);
