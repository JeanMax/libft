/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:18:43 by mcanal            #+#    #+#             */
/*   Updated: 2017/04/06 18:20:44 by mc               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void test_memccpy()
{
	void	*ctrl_ptr, *test_ptr;
	char	ctrl1[]="abcdefghijklmnopqrstuvwxyz", src1[]="test",
			test1[]="abcdefghijklmnopqrstuvwxyz", src2[]="test",
			ctrl2[]="abcdefghijklmnopqrstuvwxyz", src3[]="test\200string",
			test2[]="abcdefghijklmnopqrstuvwxyz", src4[]="test\200string";

	*src1 = 0;
	*src2 = 0;
	ctrl_ptr = memccpy(ctrl1, src1, '0', 4);
	test_ptr = ft_memccpy(test1, src2, '0', 4);
	MU_ASSERT(!memcmp(ctrl1, test1, 27), \
			  "test (%s) and ctrl (%s) differ", test1, ctrl1);
	MU_ASSERT(ctrl_ptr == test_ptr, \
			  "test (%lu) and ctrl (%lu) differ", (long)test_ptr, (long)ctrl_ptr);

	ctrl_ptr = memccpy(ctrl1, src1, '0', 5);
	test_ptr = ft_memccpy(test1, src2, '0', 5);
	MU_ASSERT(!memcmp(ctrl1, test1, 27), "");
	MU_ASSERT(ctrl_ptr == test_ptr, \
			  "test (%lu) and ctrl (%lu) differ", (long)test_ptr, (long)ctrl_ptr);

	memccpy(ctrl2, src3, '\200', 12);
	ft_memccpy(test2, src4, '\200', 12);
	MU_ASSERT(!memcmp(ctrl2, test2, 27), \
			  "test (%s) and ctrl (%s) differ", test2, ctrl2);

	memccpy(ctrl2, src3, 'r', 12);
	ft_memccpy(test2, src4, 'r', 12);
	MU_ASSERT(!memcmp(ctrl2, test2, 27), \
			  "test (%s) and ctrl (%s) differ", test2, ctrl2);

	ctrl_ptr = memccpy(ctrl2, src3, 'g', 12);
	test_ptr = ft_memccpy(ctrl2, src3, 'g', 12);
	MU_ASSERT(ctrl_ptr == test_ptr, \
			  "test (%lu) and ctrl (%lu) differ", (long)test_ptr, (long)ctrl_ptr);
}
