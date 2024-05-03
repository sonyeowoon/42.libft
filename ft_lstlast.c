/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangseo <sangseo@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:16:45 by sangseo           #+#    #+#             */
/*   Updated: 2024/04/27 02:12:54 by sangseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while ((*lst).next)
		lst = (*lst).next;
	return (lst);
}
/*
#include <stdio.h>

int main()
{
	char *a = "abc";
	char *b = "def";
	char *c = "ghi";
	t_list *node;
	t_list *node2;
	t_list *node3;
	t_list *last;

	//node = 0;
	node = ft_lstnew(a);
	node2 = ft_lstnew(b);
	node3 = ft_lstnew(c);
	(*node).next = node2;
	(*(*node).next).next = node3;
	printf("node1, content : %s, next : %p\n", (*node).content, (*node).next);
	printf("node2, content : %s, next : %p\n", (*(*node).next).content, (*(*node).next).next);
	printf("node3, content : %s, next : %p\n", (*(*(*node).next).next).content, (*(*(*node).next).next).next);
	last = ft_lstlast(node);
	printf("node1, content : %s, next : %p\n", (*node).content, (*node).next);
	printf("last, content : %s, next : %p\n", (*last).content, (*last).next);
	//printf("last : %d\n", last);
}
*/
