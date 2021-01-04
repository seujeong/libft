/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 16:40:16 by seujeong          #+#    #+#             */
/*   Updated: 2020/10/24 17:06:35 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_char;
	unsigned char	c_char;
	size_t			i;

	b_char = b;
	c_char = c;
	i = 0;
	while (i < len)
	{
		b_char[i] = c_char;
		i++;
	}
	return (b);
}
