/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:50:59 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/14 19:14:49 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;

	result = 0;
	if (s1 != 0 && s2 != 0)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		result = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		if (!result)
			return (NULL);
		if (s1)
			ft_strlcpy(result, s1, len_s1 + 1);
		else
			ft_strlcpy(result, s2, len_s2 + 1);
		if (s1 && s2)
			ft_strlcat(result, s2, len_s1 + len_s2 + 1);
	}
	return (result);
}
