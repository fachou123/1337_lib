/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:00:06 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/17 18:37:22 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	fill_dest(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	fill_dest(d_ptr, s_ptr, n);
	return (dest);
}
