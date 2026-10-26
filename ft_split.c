/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 23:36:50 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/25 18:38:25 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i != 0 && s[i] == c && s[i - 1] != c)
			|| (s[i + 1] == '\0' && s[i] != c))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static void	clean_ptr(char **ptr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static void	fill_ptr(char *ptr, char const *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
}

static int	sp(char **ptr, char const *s, char c, int c_w)
{
	char const	*start;

	int (l), (j);
	j = 0;
	l = 0;
	while (*s)
	{
		start = s;
		while (*s && *s != c)
			s++;
		l = s - start;
		if (j < c_w && l > 0)
		{
			ptr[j] = malloc(l + 1);
			if (!ptr[j])
			{
				clean_ptr(ptr, j);
				return (-1);
			}
			fill_ptr(ptr[j++], start, l);
		}
		if (*s == c)
			s++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	c_w;
	char	**ptr;
	int		j;

	if (!s)
		return (NULL);
	c_w = count_word(s, c);
	ptr = malloc(sizeof(char *) * (c_w + 1));
	if (!ptr)
		return (NULL);
	j = sp(ptr, s, c, c_w);
	if (j == -1)
		return (NULL);
	ptr[j] = NULL;
	return (ptr);
}
