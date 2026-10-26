/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/23 23:21:41 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/25 18:21:19 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	j;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s) + 1;
	j = 0;
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	while (s[j])
	{
		ptr[j] = f(j, s[j]);
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
