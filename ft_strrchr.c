/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 22:49:41 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/27 18:19:04 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	const char		*p;
	unsigned char	uc;

	i = 0;
	p = NULL;
	uc = (unsigned char) c;
	while (s[i])
	{
		if ((unsigned char)s[i] == uc)
			p = &s[i];
		i++;
	}
	if (uc == '\0')
		return ((char *) & s[i]);
	if (!p)
		return (NULL);
	return ((char *) p);
}
