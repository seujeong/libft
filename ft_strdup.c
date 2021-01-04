/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 21:36:25 by seujeong          #+#    #+#             */
/*   Updated: 2020/10/28 19:06:14 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new_s1;

	len = ft_strlen(s1) + 1;
	if (!(new_s1 = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy(new_s1, s1, len);
	return (new_s1);
}
