/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 18:40:12 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/14 19:04:27 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	result_index;
	char	*result;

	index = 0;
	result_index = 0;
	if (!s)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[index])
	{
		if (index >= start && result_index < len)
		{
			result[result_index] = s[index];
			result_index++;
		}
		index++;
	}
	result[result_index] = '\0';
	return (result);
}
