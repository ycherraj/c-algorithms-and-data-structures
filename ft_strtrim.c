/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:15:03 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/13 04:04:40 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_findex(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (s1[i] != '\0' && n == 0)
	{
		j = 0;
		while (set[j] != '\0' && n == 0)
		{
			if (set[j] == s1[i])
			{
				n = 1;
				break ;
			}
			j++;
		}
		if (n == 0)
			return (i);
		n = 0;
		i++;
	}
	return (i);
}

static int	ft_lindex(char const *s1, char const *set)
{
	size_t			len;
	int				i;
	int				n;

	len = ft_strlen(s1);
	n = 0;
	while (len > 0 && n == 0)
	{
		i = 0;
		while (set[i] != '\0' && n == 0)
		{
			if (set[i] == s1[len - 1])
			{
				n = 1;
				break ;
			}
			i++;
		}
		if (n == 0)
			return (len);
		n = 0;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		end;
	int		start;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = ft_findex(s1, set);
	end = ft_lindex(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	ptr = malloc(end - start + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
