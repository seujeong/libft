/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:06:02 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/14 19:10:24 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n_start;
	size_t	n_end;
	char	*result;

	result = 0;
	if (s1 != 0 && set != 0)
	{
		n_start = 0;
		n_end = ft_strlen(s1);
		while (s1[n_start] && ft_strchr(set, s1[n_start]))
			n_start++;
		while (s1[n_end - 1] && ft_strchr(set, s1[n_end - 1]) &&
				n_end > n_start)
			n_end--;
		result = (char *)malloc(sizeof(char) * (n_end - n_start + 1));
		if (result)
			ft_strlcpy(result, &s1[n_start], n_end - n_start + 1);
	}
	return (result);
}
