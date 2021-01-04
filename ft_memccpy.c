/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:59:49 by seujeong          #+#    #+#             */
/*   Updated: 2020/10/24 18:23:51 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*c_d;
	unsigned char	*c_s;
	unsigned char	cc;
	size_t			i;

	c_d = (unsigned char *)dst;
	c_s = (unsigned char *)src;
	cc = c;
	i = 0;
	while (i < n)
	{
		c_d[i] = c_s[i];
		if (c_s[i] == cc)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
