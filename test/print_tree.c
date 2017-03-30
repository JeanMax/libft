/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanal <zboub@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 01:55:29 by mcanal            #+#    #+#             */
/*   Updated: 2016/03/18 16:59:16 by mcanal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
         a         
        / \        
      /     \      
    /         \    
    b         c    
   / \       / \   
 /     \   /     \ 
 d     e   f     g 
/ \   / \ / \   / \
h i   j k l m   n o
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

#define X 22
#define Y 11

void print_node(t_bst *node)
{
	write(1, "\033[31;01m", 8);
	write(1, &node->content, 1);
	write(1, " \033[0m", 5);
}

static void		actual_printing(char **buf)
{
	if (!(*buf))
		return ;
	if (!strchr(*buf, '/') && !strchr(*buf, '\\'))
		write(1, "\033[31;01m", 8);
	puts(*buf);
	write(1, "\033[0m", 5);
	actual_printing(buf + 1);
}

static void		fill_array(t_bst *node, int space, int x, char **buf)
{
	int	new_x;
	int	i;

	if (!node || !*buf)
		return ;

	buf[0][x] = (char)node->content;

	if (node->left)
	{
		new_x = x + 1;
		for (i = 1; i <= space; i++)
		{
			new_x -= 2;
			buf[i][new_x] = '/';
		}
		fill_array(node->left, space - 1, new_x, buf + space + 1);
	}
	if (node->right)
	{
		new_x = x - 1;
		for (i = 1; i <= space; i++)
		{
			new_x += 2;
			buf[i][new_x] = '\\';
		}
		fill_array(node->right, space - 1, new_x, buf + space + 1);
	}
}

void			print_tree(t_bst *root)
{
	char	*buf[Y];
	int		i;

	for (int i = 0; i < Y - 1; i++)
	{
		buf[i] = malloc(sizeof(char) * X);
		memset(buf[i], ' ', X - 1);
		buf[i][X - 1] = '\0';
	}
	buf[Y - 1] = NULL;

	fill_array(root, 3, 9, buf);
	actual_printing(buf);

	for (int i = 0; i < Y; i++)
		free(buf[i]);
}


int cmp(const void *a, const void *b)
{
	return ((char)((t_bst *)a)->content - (char)((t_bst *)b)->content);
}

int main(void)
{
	t_bst *root = NULL;
	char rdm;

	srand(time(NULL));

	for (char i = 0; i <= 100; i++)
	{
		rdm = rand() % 10 + '0';
		/* ft_putchar_clr(rdm, "r"); ft_putendl(""); */
		ft_bstavladd(&root, (void *)(long)rdm, sizeof(char), cmp);
		/* print_tree(root); */
	}
	while (root)
	{
		print_tree(root);
		ft_bstinorder(root, print_node);
		ft_debugstr("in", "order");
		ft_bstavldel(&root, &root, cmp);
	}


	ft_bstclean(&root);
	return (0);
}
