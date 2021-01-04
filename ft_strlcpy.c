/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:43:23 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/14 19:16:32 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	j = 0;
	if (!dst && !src)
		return (0);
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize > 0)
	{
		while (src[j] && i < dstsize - 1)
		{
			dst[i++] = src[j++];
		}
	}
	else
		return (s_len);
	dst[i] = '\0';
	if (d_len > dstsize)
		d_len = dstsize;
	return (s_len);
}
