/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:01:29 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/23 21:48:01 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static void	fill_ptr(char *ptr, const char *s2, size_t s1_len, size_t i)
{
	size_t	j;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	j = 0;
	while (j < s2_len && i < (s1_len + s2_len))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;
	size_t	i;

	if (!s1 || !s2 || ft_strlen(s1) + 1 > SIZE_MAX - ft_strlen(s2))
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}
	fill_ptr(ptr, s2, s1_len, i);
	return (ptr);
}
