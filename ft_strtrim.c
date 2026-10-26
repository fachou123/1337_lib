/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 17:22:07 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/22 23:24:02 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	remove_set(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (start);
		start++;
		i++;
	}
	return (start);
}

static size_t	remove_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = remove_set(s1, set);
	end = remove_end(s1, set);
	if (start >= end)
		end = start;
	ptr = malloc(end - start + 1);
	if (!ptr)
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
