/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangseo <sangseo@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:34:07 by sangseo           #+#    #+#             */
/*   Updated: 2024/04/30 23:23:29 by sangseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	first = *lst;
	while ((**lst).next)
		*lst = (**lst).next;
	(**lst).next = new;
	*lst = first;
}

#include <stdio.h>

int main()
{
	char *a = "abc";
	char *b = "def";
	char *c = "ghi";
	char *d = "sanhe";
	t_list *node;
	t_list *node2;
	t_list *node3;
	t_list *node4;
	t_list *last;
	t_list *last1;
	t_list *last2;
	t_list **lst;

	//node = 0;
	node = ft_lstnew(a);
	lst = malloc(sizeof(t_list *));
	*lst = malloc(sizeof(t_list));
	*lst = node;
	node2 = ft_lstnew(b);
	node3 = ft_lstnew(c);
	node4 = ft_lstnew(d);
	(*node).next = node2;
	(*(*node).next).next = node3;
	ft_lstadd_back(lst, node4);
	last1 = ft_lstlast(*lst);
	last2 = ft_lstlast(node);
	printf("*lst last : %s, %p\n", (*last1).content, (*last1).next);
	printf("node last : %s, %p\n", (*last2).content, (*last2).next);
}
