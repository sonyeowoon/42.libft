/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangseo <sangseo@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:08:07 by sangseo           #+#    #+#             */
/*   Updated: 2024/04/27 01:34:51 by sangseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	cnt = 0;
	while (lst)
	{
		cnt++;
		lst = (*lst).next;
	}
	return (cnt);
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

	//node = 0;
	node = ft_lstnew(a);
	node2 = ft_lstnew(b);
	node3 = ft_lstnew(c);
	//(*node).next = node2;
	//(*(*node).next).next = node3;
	printf("lstsize : %d\n", ft_lstsize(node));
	printf("node1, content : %s, next : %p\n", (*node).content, (*node).next);
	//printf("node2, content : %s, next : %p\n", (*(*node).next).content, (*(*node).next).next);
	//printf("node3, content : %s, next : %p\n", (*(*(*node).next).next).content, (*(*(*node).next).next).next);
}
*/
