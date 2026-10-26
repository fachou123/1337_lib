/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:14:05 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/19 21:20:33 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static size_t	d_length(const char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dest[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	d_len = d_length(dst, size);
	s_len = ft_strlen(src);
	i = d_len;
	j = 0;
	if (d_len >= size)
		return (size + s_len);
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
