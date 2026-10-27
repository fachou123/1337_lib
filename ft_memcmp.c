/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 16:36:35 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/27 16:38:55 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_s1;
	const unsigned char	*byte_s2;
	size_t				i;

	byte_s1 = (const unsigned char *) s1;
	byte_s2 = (const unsigned char *) s2;
	i = 0;
	while (i < n && byte_s1[i] == byte_s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (byte_s1[i] - byte_s2[i]);
}
