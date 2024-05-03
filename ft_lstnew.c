/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangseo <sangseo@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:28:40 by sangseo           #+#    #+#             */
/*   Updated: 2024/04/26 23:22:07 by sangseo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ll;

	ll = (t_list *)malloc(sizeof(t_list));
	if (!ll)
		return (NULL);
	(*ll).content = content;
	(*ll).next = NULL;
	return (ll);
}
