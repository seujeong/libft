/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:09:58 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/14 17:43:21 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_list;
	t_list	*new_list;

	first_list = NULL;
	if (!f)
		return (NULL);
	while (lst)
	{
		if (!(new_list = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&first_list, del);
			return (NULL);
		}
		ft_lstadd_back(&first_list, new_list);
		lst = lst->next;
	}
	return (first_list);
}
