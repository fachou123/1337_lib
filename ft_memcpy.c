/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:29:13 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/17 18:35:35 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	const unsigned char	*s_ptr;

	d_ptr = dest;
	s_ptr = src;
	while (n > 0)
	{
		*d_ptr = *s_ptr;
		d_ptr++;
		s_ptr++;
		n--;
	}
	return (dest);
}
