/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 11:23:44 by mcanal            #+#    #+#             */
/*   Updated: 2016/04/03 11:24:04 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		test_get_next_line(void)
{
	intro("get_next_line");

	return (ko_str(__LINE__, "", "", ""));

	return (ok());
}
