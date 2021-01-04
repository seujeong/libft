/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:50:55 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/07 17:27:55 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t d_len;
	size_t s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = d_len;
	j = 0;
	if (size > 0 && d_len < size - 1)
	{
		while (src[j] && d_len + j < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = 0;
	}
	if (d_len > size)
		d_len = size;
	return (d_len + s_len);
}
