/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 21:37:29 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/11 18:04:17 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*s_char;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		s_char = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (s_char)
		{
			while (s[i] != '\0')
			{
				s_char[i] = f(i, s[i]);
				i++;
			}
			s_char[i] = '\0';
			return (s_char);
		}
	}
	return (NULL);
}
