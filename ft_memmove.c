/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:57:29 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/14 18:47:39 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_char;
	unsigned char	*src_char;

	if (dst == 0 && src == 0)
		return (0);
	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	if (dst_char < src_char)
	{
		while (len--)
			*dst_char++ = *src_char++;
	}
	else
	{
		dst_char += len - 1;
		src_char += len - 1;
		while (len)
		{
			*dst_char-- = *src_char--;
			len--;
		}
	}
	return (dst);
}
