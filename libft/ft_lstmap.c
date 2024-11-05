/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:49:09 by andcarva          #+#    #+#             */
/*   Updated: 2024/11/04 14:06:57 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp_list;
	t_list	*node;

	if (!lst)
		return (NULL);
	temp_list = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&temp_list, del);
			return (NULL);
		}
		ft_lstadd_back(&temp_list, node);
		lst = lst->next;
	}
	return (temp_list);
}
