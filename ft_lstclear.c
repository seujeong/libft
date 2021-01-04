/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:58:31 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/16 17:04:04 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_dummy;

	if (!lst)
		return ;
	while (*lst)
	{
		next_dummy = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_dummy;
	}
	*lst = NULL;
}
