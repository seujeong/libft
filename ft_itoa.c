/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:12:29 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/12 21:13:53 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_num(int n)
{
	size_t	num;

	num = 0;
	if (n == 0)
		return (1);
	if (n > 0)
	{
		while (n > 0)
		{
			num++;
			n /= 10;
		}
	}
	else
	{
		while (n < 0)
		{
			num++;
			n /= 10;
		}
		return (num + 1);
	}
	return (num);
}

char			*ft_itoa(int n)
{
	size_t	n_len;
	char	*result;
	int		minus;

	n_len = count_num(n);
	result = (char *)malloc(sizeof(char) * n_len + 1);
	if (!result)
		return (NULL);
	result[n_len] = '\0';
	minus = 1;
	if (n < 0)
		result[0] = '-';
	if (n < 0)
		minus = -1;
	if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		result[--n_len] = n % 10 * minus + 48;
		n /= 10;
	}
	return (result);
}
