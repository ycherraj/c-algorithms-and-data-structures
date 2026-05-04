/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:07:11 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/12 22:56:43 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	if ((ptr2 < ptr1) && (ptr1 < (ptr2 + n)))
	{
		while (n > 0)
		{
			ptr1[n - 1] = ptr2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (dest);
}
