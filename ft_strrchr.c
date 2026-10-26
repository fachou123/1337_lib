/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 22:49:41 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/19 23:13:31 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*p;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			p = &s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (!p)
		return (NULL);
	return ((char *)p);
}
