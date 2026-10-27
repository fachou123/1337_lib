/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:59:21 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/27 16:19:14 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		c_byte;
	const unsigned char	*src_byte;
	size_t				i;

	src_byte = (const unsigned char *) s;
	c_byte = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (src_byte[i] == c_byte)
		{
			return ((void *)(src_byte + i));
		}
		i++;
	}
	return (NULL);
}
