/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:09:20 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/17 18:37:03 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	unsigned char	c_ptr;
	size_t			i;

	s_ptr = (unsigned char *)s;
	c_ptr = c;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = c_ptr;
		i++;
	}
	return (s);
}
