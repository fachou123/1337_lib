/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 23:13:21 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/23 23:18:34 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	num_len(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	fill_ptr(char *ptr, int num, int num_l, int n)
{
	int	i;

	if (n < 0)
		ptr[0] = '-';
	i = num_l - 1;
	while (num > 0)
	{
		ptr[i] = (num % 10) + '0';
		i--;
		num /= 10;
	}
	ptr[num_l] = '\0';
}

static char	*is_ziro(int n)
{
	char	*ptr;

	(void)n;
	ptr = malloc(2);
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	num;
	int		num_l;
	char	*ptr;

	if (n == 0)
		return (is_ziro(n));
	num = n;
	if (n < 0)
		num = -num;
	num_l = num_len(num);
	if (n < 0)
		num_l += 1;
	ptr = malloc(num_l + 1);
	if (!ptr)
		return (NULL);
	fill_ptr(ptr, num, num_l, n);
	ptr[num_l] = '\0';
	return (ptr);
}
