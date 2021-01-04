/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:54:44 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/09 18:52:54 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				counting_s(char const *s, char c)
{
	int	is_c;
	int	count_s;
	int index;

	is_c = 1;
	count_s = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			is_c = 1;
		else if (is_c == 1)
		{
			is_c = 0;
			count_s++;
		}
		s++;
	}
	return (count_s);
}

static int		counting_c(char const *s, char c, int index)
{
	int len;

	len = 0;
	while (s[index] != c && s[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}

static char		**free_s(char **s_char, int index)
{
	while (index > 0)
	{
		free(s_char[index - 1]);
		index--;
	}
	free((void *)s_char);
	return (NULL);
}

static char		**result(char const *s, char **s_char, char c, int num_s)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < num_s)
	{
		k = 0;
		while (s[i] == c)
			i++;
		s_char[j] = (char *)malloc(sizeof(char) * (counting_c(s, c, i) + 1));
		if (s_char[j] == NULL)
			return (free_s(s_char, j));
		while (s[i] != '\0' && s[i] != c)
		{
			s_char[j][k] = s[i];
			k++;
			i++;
		}
		s_char[j][k] = '\0';
		j++;
	}
	s_char[j] = 0;
	return (s_char);
}

char			**ft_split(char const *s, char c)
{
	char	**s_char;
	int		num_s;

	if (s == NULL)
		return (NULL);
	num_s = counting_s(s, c);
	s_char = (char **)malloc(sizeof(char *) * (num_s + 1));
	if (s_char == NULL)
		return (NULL);
	return (result(s, s_char, c, num_s));
}
