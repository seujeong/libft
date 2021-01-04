/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 21:35:46 by seujeong          #+#    #+#             */
/*   Updated: 2020/10/28 18:08:17 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;
	unsigned char	c_char;
	int				i;

	s_char = (unsigned char *)s;
	c_char = (unsigned char)c;
	i = 0;
	while (i < (int)n)
	{
		if (s_char[i] == c_char)
			return (&s_char[i]);
		i++;
	}
	return (NULL);
}
