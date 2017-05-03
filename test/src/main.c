/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:32:38 by mcanal            #+#    #+#             */
/*   Updated: 2017/05/03 20:13:15 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

static void suites_school()
{
	MU_TEST_SUITE suite_part1 = {
		{test_atoi, "ft_atoi"},
		{test_bzero, "ft_bzero"},
		{test_isalnum, "ft_isalnum"},
		{test_isdigit, "ft_isdigit"},
		{test_isalpha, "ft_isalpha"},
		{test_isprint, "ft_isprint"},
		{test_isascii, "ft_isascii"},
		{test_memcmp, "ft_memcmp"},
		{test_memset, "ft_memset"},
		{test_memccpy, "ft_memccpy"},
		{test_memchr, "ft_memchr"},
		{test_memcpy, "ft_memcpy"},
		{test_memmove, "ft_memmove"},
		{test_strcat, "ft_strcat"},
		{test_strchr, "ft_strchr"},
		{test_strcmp, "ft_strcmp"},
		{test_strcpy, "ft_strcpy"},
		{test_strdup, "ft_strdup"},
		{test_strlcat, "ft_strlcat"},
		{test_strlen, "ft_strlen"},
		{test_strncat, "ft_strncat"},
		{test_strncmp, "ft_strncmp"},
		{test_strncpy, "ft_strncpy"},
		{test_strnstr, "ft_strnstr"},
		{test_strrchr, "ft_strrchr"},
		{test_strstr, "ft_strstr"},
		{test_tolower, "ft_tolower"},
		{test_toupper, "ft_toupper"},
	};

	MU_TEST_SUITE suite_part2 = {
		{test_itoa, "ft_itoa"},
		{test_memalloc, "ft_memalloc"},
		{test_memdel, "ft_memdel"},
		{test_putchar, "ft_putchar"},
		{test_putchar_fd, "ft_putchar_fd"},
		{test_putnbr, "ft_putnbr"},
		{test_putnbr_fd, "ft_putnbr_fd"},
		{test_putstr, "ft_putstr"},
		{test_putstr_fd, "ft_putstr_fd"},
		{test_putendl, "ft_putendl"},
		{test_putendl_fd, "ft_putendl_fd"},
		{test_striter, "ft_striter"},
		{test_striteri, "ft_striteri"},
		{test_strnequ, "ft_strnequ"},
		{test_strjoin, "ft_strjoin"},
		{test_strnew, "ft_strnew"},
		{test_strclr, "ft_strclr"},
		{test_strmap, "ft_strmap"},
		{test_strsplit, "ft_strsplit"},
		{test_strdel, "ft_strdel"},
		{test_strmapi, "ft_strmapi"},
		{test_strsub, "ft_strsub"},
		{test_strequ, "ft_strequ"},
		{test_strtrim, "ft_strtrim"},
	};

	MU_TEST_SUITE suite_bonus = {
		{test_lstadd, "ft_lstadd"},
		{test_lstdelone, "ft_lstdelone"},
		{test_lstmap, "ft_lstmap"},
		{test_lstdel, "ft_lstdel"},
		{test_lstiter, "ft_lstiter"},
		{test_lstnew, "ft_lstnew"},
	};

	MU_RUN_SUITE(suite_part1, "part1");
	MU_RUN_SUITE(suite_part2, "part2");
	MU_RUN_SUITE(suite_bonus, "bonus");
}

static void suites_me(char *search)
{
/* MU_TEST_SUITE suite_arr = { */

/* }; */

/* MU_TEST_SUITE suite_bst = { */

/* }; */

/* MU_TEST_SUITE suite_hash = { */

/* }; */

	MU_TEST_SUITE suite_int = {
		{test_isalnum, "ft_isalnum"},
		{test_isdigit, "ft_isdigit"},
		{test_isalpha, "ft_isalpha"},
		{test_isprint, "ft_isprint"},
		{test_isascii, "ft_isascii"},
		{test_itoa, "ft_itoa"},
		{test_tolower, "ft_tolower"},
		{test_toupper, "ft_toupper"},
		{test_islower, "ft_islower"},
		{test_isgraph, "ft_isgraph"},
		{test_ispunct, "ft_ispunct"},
		{test_isupper, "ft_isupper"},
		{test_iscntrl, "ft_iscntrl"},
		{test_isspace, "ft_isspace"},
		{test_isxdigit, "ft_isxdigit"},
		{test_isblank, "ft_isblank"},
		{test_min, "ft_min"},
		{test_max, "ft_max"},
		{test_abs, "ft_abs"},
	};

	MU_TEST_SUITE suite_io = {
		{test_get_next_line, "get_next_line"},
		{test_putnbr, "ft_putnbr"},
		{test_putchar, "ft_putchar"},
		{test_putnbr_fd, "ft_putnbr_fd"},
		{test_putchar_fd, "ft_putchar_fd"},
		{test_putstr, "ft_putstr"},
		{test_putendl, "ft_putendl"},
		{test_putstr_fd, "ft_putstr_fd"},
		{test_putendl_fd, "ft_putendl_fd"},
		{test_debugchar, "ft_debugchar"},
		{test_debugstr, "ft_debugstr"},
		{test_debugnbr, "ft_debugnbr"},
		{test_debugdbl, "ft_debugdbl"},
		{test_putchar_clr, "ft_putchar_clr"},
		{test_putstr_clr, "ft_putstr_clr"},
		{test_putendl_clr, "ft_putendl_clr"},
		{test_putnbr_clr, "ft_putnbr_clr"},
		{test_putdbl_clr, "ft_putdbl_clr"},
		{test_putdbl, "ft_putdbl"},
		{test_putdbl_fd, "ft_putdbl_fd"},
	};

	MU_TEST_SUITE suite_lst1 = {
		{test_lstadd, "ft_lstadd"},
		{test_lstdelone, "ft_lstdelone"},
		{test_lstmap, "ft_lstmap"},
		{test_lstdel, "ft_lstdel"},
		{test_lstiter, "ft_lstiter"},
		{test_lstnew, "ft_lstnew"},
		{test_lstlast, "ft_lstlast"},
		{test_lstinser, "ft_lstinser"},
		{test_lstfind, "ft_lstfind"},
		{test_lstisn, "ft_lstisn"},
		{test_lstat, "ft_lstat"},
		{test_lstdellink, "ft_lstdellink"},
		{test_lstrplc, "ft_lstrplc"},
		{test_lstaddlast, "ft_lstaddlast"},
		{test_lstlen, "ft_lstlen"},
	};

/* MU_TEST_SUITE suite_lst2 = { */

/* }; */

	MU_TEST_SUITE suite_mem = {
		{test_bzero, "ft_bzero"},
		{test_memcmp, "ft_memcmp"},
		{test_memset, "ft_memset"},
		{test_memalloc, "ft_memalloc"},
		{test_memcpy, "ft_memcpy"},
		{test_shellsort, "ft_shellsort"},
		{test_memccpy, "ft_memccpy"},
		{test_memdel, "ft_memdel"},
		{test_memchr, "ft_memchr"},
		{test_memmove, "ft_memmove"},
		{test_swap, "ft_swap"},
		{test_realloc, "ft_realloc"},
	};

	MU_TEST_SUITE suite_str = {
		{test_atoi, "ft_atoi"},
		{test_striter, "ft_striter"},
		{test_strncpy, "ft_strncpy"},
		{test_strcat, "ft_strcat"},
		{test_striteri, "ft_striteri"},
		{test_strnequ, "ft_strnequ"},
		{test_strchr, "ft_strchr"},
		{test_strjoin, "ft_strjoin"},
		{test_strnew, "ft_strnew"},
		{test_strclr, "ft_strclr"},
		{test_strlcat, "ft_strlcat"},
		{test_strnstr, "ft_strnstr"},
		{test_strcmp, "ft_strcmp"},
		{test_strlen, "ft_strlen"},
		{test_strrchr, "ft_strrchr"},
		{test_strcpy, "ft_strcpy"},
		{test_strmap, "ft_strmap"},
		{test_strsplit, "ft_strsplit"},
		{test_strdel, "ft_strdel"},
		{test_strmapi, "ft_strmapi"},
		{test_strstr, "ft_strstr"},
		{test_strdup, "ft_strdup"},
		{test_strncat, "ft_strncat"},
		{test_strsub, "ft_strsub"},
		{test_strequ, "ft_strequ"},
		{test_strncmp, "ft_strncmp"},
		{test_strtrim, "ft_strtrim"},
		{test_istoobig, "ft_istoobig"},
		{test_strndup, "ft_strndup"},
	};


	if (search) {
		int test_run_before = g_tests_run; //hmmm...

		/* MU_RUN_TEST_FROM_SUITE(search, suite_arr); */
		/* MU_RUN_TEST_FROM_SUITE(search, suite_bst); */
		/* MU_RUN_TEST_FROM_SUITE(search, suite_hash); */
		MU_RUN_TEST_FROM_SUITE(search, suite_int);
		MU_RUN_TEST_FROM_SUITE(search, suite_io);
		MU_RUN_TEST_FROM_SUITE(search, suite_lst1);
		/* MU_RUN_TEST_FROM_SUITE(search, suite_lst2); */
		MU_RUN_TEST_FROM_SUITE(search, suite_mem);
		MU_RUN_TEST_FROM_SUITE(search, suite_str);

		if (test_run_before == g_tests_run) {
			fprintf(stderr, "+ Test %s: "CLR_RED"not found\n"CLR_RESET, search);
			exit(EXIT_FAILURE);
		}
	} else {
		/* MU_RUN_SUITE(suite_arr, "arr"); */
		/* MU_RUN_SUITE(suite_bst, "bst"); */
		/* MU_RUN_SUITE(suite_hash, "hash"); */
		MU_RUN_SUITE(suite_int, "int");
		MU_RUN_SUITE(suite_io, "io");
		MU_RUN_SUITE(suite_lst1, "lst1");
		/* MU_RUN_SUITE(suite_lst2, "lst2"); */
		MU_RUN_SUITE(suite_mem, "mem");
		MU_RUN_SUITE(suite_str, "str");
	}
}


MU_HAI(); //yep, this is really ugly :/

int main(int ac, char **av) //TODO: --help
{
	setbuf(stdout, NULL); /* TODO: find a better place for this */
	if (ac > 1 && (!strcmp(*(av + 1), "--school") || !strcmp(*(av + 1), "-42"))) {
		suites_school();
	} else {
		if (ac == 1) {
			suites_me(NULL);
		} else {
			while (*++av) {
				suites_me(*av);
			}
			printf("\n");
		}
	}

	MU_KTHXBYE();
	return EXIT_SUCCESS;
}
