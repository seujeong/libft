/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 21:35:37 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/12 19:44:26 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_char;
	unsigned char	*s2_char;

	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	while (n)
	{
		if (*s1_char > *s2_char)
			return (*s1_char - *s2_char);
		else if (*s1_char < *s2_char)
			return (*s1_char - *s2_char);
		s1_char++;
		s2_char++;
		n--;
	}
	return (0);
}
