/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:12:52 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/13 03:37:17 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_charge(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr ;

	i = 0;
	ptr = malloc (len + 1);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr ;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= (unsigned int)s_len || len == 0)
	{
		ptr = malloc (1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > s_len - start)
		len = s_len - start;
	return (ft_charge(s, start, len));
}
