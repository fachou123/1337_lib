/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:04 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/22 17:00:32 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	ft_min(size_t remainder, size_t len)
{
	if (remainder < len)
		return (remainder);
	return (len);
}

static char	*make_sub(char const *s, char *ptr, size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	remainder;
	char	*ptr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	remainder = s_len - start;
	ptr = malloc(sizeof(char) * (ft_min(remainder, len) + 1));
	if (!ptr)
		return (NULL);
	return (make_sub(s, ptr, start, ft_min(remainder, len)));
}
