/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:17:16 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/08 19:47:37 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_swap()
{
	int int_a = 42;
	int int_b = 21;

	ft_swap(&int_a, &int_b, sizeof(int));
	MU_ASSERT(int_a == 21, "int_a (%d) not swap'ed", int_a);
	MU_ASSERT(int_b == 42, "int_b (%d) not swap'ed", int_b);

	char char_a = 42;
	char char_b = 21;

	ft_swap(&char_a, &char_b, sizeof(char));
	MU_ASSERT(char_a == 21, "char_a (%c) not swap'ed", char_a);
	MU_ASSERT(char_b == 42, "char_b (%c) not swap'ed", char_b);

	char *str_a = "heyheyhey";
	char *str_b = "byebyebye";

	ft_swap(&str_a, &str_b, sizeof(char *));
	MU_ASSERT(!strcmp(str_a, "byebyebye"), "str_a (%s) not swap'ed", str_a);
	MU_ASSERT(!strcmp(str_b, "heyheyhey"), "str_b (%s) not swap'ed", str_b);
}
