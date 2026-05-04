/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycherraj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 01:18:40 by ycherraj          #+#    #+#             */
/*   Updated: 2025/11/13 04:07:30 by ycherraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_free(char **p, int j)
{
	while (j >= 0)
	{
		free(p[j]);
		j--;
	}
	free(p);
	return (NULL);
}

static char	**ft_helmall(char const *s, char c)
{
	char	**p;
	int		i;
	int		flag;
	int		n;

	if (!s)
		return (NULL);
	flag = 0;
	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (flag == 0 && s[i] != c)
		{
			n++;
			flag = 1;
		}
		if (flag == 1 && s[i] == c)
			flag = 0;
		i++;
	}
	p = malloc((n + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	return (p);
}

static int	ft_strlenm(int index, char const *s, char c)
{
	int	len;

	len = 0;
	while (s[index] != '\0' && s[index] != c)
	{
		index++;
		len++;
	}
	return (len);
}

static char	*ft_charge(char const *s, int start, int len)
{
	char	*ptr ;
	int		i;

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

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;

	p = ft_helmall(s, c);
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			p[j] = ft_charge(s, i, ft_strlenm(i, s, c));
			if (p[j] == NULL)
				return (ft_free(p, j - 1));
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	p[j] = NULL;
	return (p);
}
