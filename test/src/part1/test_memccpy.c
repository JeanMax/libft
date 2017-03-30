/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:18:43 by mcanal            #+#    #+#             */
/*   Updated: 2015/11/29 18:11:32 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int test_memccpy(void)
{
	intro("memccpy");

	void	*ptr1, *ptr2;
	char	dst1[]="abcdefghijklmnopqrstuvwxyz", src1[]="test",
			dst2[]="abcdefghijklmnopqrstuvwxyz", src2[]="test",
			dst3[]="abcdefghijklmnopqrstuvwxyz", src3[]="test\200string",
			dst4[]="abcdefghijklmnopqrstuvwxyz", src4[]="test\200string";

	*src1 = 0;
	*src2 = 0;
	ptr1 = memccpy(dst1, src1, '0', 4);
	ptr2 = ft_memccpy(dst2, src2, '0', 4);
	if (memcmp(dst1, dst2, 27) || ptr1 != ptr2)
		return (ko_str(__LINE__, "a..z, test, \\0, 4", dst2, dst1));

	ptr1 = memccpy(dst1, src1, '0', 5);
	ptr2 = ft_memccpy(dst2, src2, '0', 5);
	if (memcmp(dst1, dst2, 27) || ptr1 != ptr2)
		return (ko_str(__LINE__, "a..z, test, \\0, 5", dst2, dst1));

	memccpy(dst3, src3, '\200', 12);
	ft_memccpy(dst4, src4, '\200', 12);
	if (memcmp(dst3, dst4, 27))
		return (ko_str(__LINE__, "a..z, test\\200string, \\200, 12", dst4, dst3));

	memccpy(dst3, src3, 'r', 12);
	ft_memccpy(dst4, src4, 'r', 12);
	if (memcmp(dst3, dst4, 27))
		return (ko_str(__LINE__, "a..z, test\\200string, r, 12", dst4, dst3));

	ptr1 = memccpy(dst3, src3, 'g', 12);
	ptr2 = ft_memccpy(dst3, src3, 'g', 12);
	if (ptr1 != ptr2)
		return (ko_str(__LINE__, "a..z, test\\200string, g, 12", dst4, dst3));
	
	return (ok());
}
