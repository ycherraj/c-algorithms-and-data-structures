/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 22:11:26 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/13 04:25:29 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_itoazero(int n)
{
	char	*ptr;

	ptr = malloc(2);
	if (!ptr)
		return (NULL);
	ptr[0] = n + '0';
	ptr[1] = '\0';
	return (ptr);
}

static char	*ft_itoasp(int n)
{
	char	*ptr;
	char	*s;
	int		i;

	(void)n;
	s = "-2147483648";
	ptr = malloc(12);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	*ft_itoane(int n)
{
	char	*ptr;
	int		i;
	int		num;

	n = -n;
	num = n;
	i = 0;
	while (num >= 1)
	{
		num = num / 10;
		i++;
	}
	ptr = malloc(i + 2);
	if (!ptr)
		return (NULL);
	ptr[i + 1] = '\0';
	while (n > 0)
	{
		ptr[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	ptr[i] = '-';
	return (ptr);
}

static char	*ft_itoapo(int n)
{
	char	*ptr;
	int		i;
	int		num;

	num = n;
	i = 0;
	while (num >= 1)
	{
		num = num / 10;
		i++;
	}
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	while (n > 0)
	{
		ptr[i - 1] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_itoazero(n));
	else if (n == -2147483648)
		return (ft_itoasp(n));
	else if (n > 0)
		return (ft_itoapo(n));
	else
		return (ft_itoane(n));
}
