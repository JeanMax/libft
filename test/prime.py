# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    prime.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <zboub@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/17 19:48:10 by mcanal            #+#    #+#              #
#    Updated: 2016/03/17 19:59:35 by mcanal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import math

#if n > 2
def is_prime(n):
    if not n % 2:
        return False
    for i in range(3, int(math.sqrt(n)), 2):
        if not n % i:
            return False
    return True


def next_prime(n):
    n = n * 2 - 1
    while not is_prime(n):
        n += 2
    return n


l = []
n = 31
while n < 3 * 10 **9:
    l.append(n)
    n = next_prime(n)

print(l)
