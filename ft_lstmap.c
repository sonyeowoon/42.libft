/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangseo <sangseo@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 23:26:50 by sangseo           #+#    #+#             */
/*   Updated: 2024/05/01 14:37:33 by sangseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*f_lst;

	f_lst = NULL;
	while (lst)
	{
		temp = ft_lstnew(f((*lst).content));
		if (!temp)
		{
			ft_lstclear(&f_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&f_lst, temp);
		lst = (*lst).next;
		ft_lstdelone(temp, del);
	}
	return (f_lst);
}
