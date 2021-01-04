/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seujeong <seujeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:44:02 by seujeong          #+#    #+#             */
/*   Updated: 2020/11/12 17:57:41 by seujeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		index;
	char	c[10];
	int		minus_check;
	int		i;

	index = 0;
	minus_check = 0;
	i = 1;
	if (n < 0)
		minus_check = 1;
	if (n == 0)
		c[9] = 48;
	while (n != 0)
	{
		c[9 - index] = n % 10 + 48;
		if (minus_check == 1)
			c[9 - index] = n % 10 * -1 + 48;
		n /= 10;
		index++;
		i = index;
	}
	if (minus_check == 1)
		write(fd, "-", 1);
	write(fd, &c[10 - i], i);
}
