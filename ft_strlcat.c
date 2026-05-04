/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:59:33 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/12 19:01:15 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	len;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	len = lendst;
	if (size <= len)
		return (size + lensrc);
	i = 0;
	while (len < (size - 1) && src[i])
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[len] = '\0';
	return (lendst + lensrc);
}
