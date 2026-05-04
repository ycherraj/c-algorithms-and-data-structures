/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 00:09:53 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/13 04:15:59 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		write (fd, "-", 1);
		ft_putnbr_fd((n * -1), fd);
	}
	else if (n >= 0 && n <= 9)
	{
		c = n + '0' ;
		write (fd, &c, 1);
	}
	else if (n > 9)
	{
		c = (n % 10) + '0';
		ft_putnbr_fd((n / 10), fd);
		write (fd, &c, 1);
	}
}
