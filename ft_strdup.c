/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:10:11 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/13 03:27:28 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			n;
	size_t			i;
	char			*ptr ;

	n = ft_strlen(s);
	i = 0;
	ptr = malloc (n + 1);
	if (!ptr)
		return (NULL);
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
