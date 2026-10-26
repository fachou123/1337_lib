/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fachouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:05:52 by fachouar          #+#    #+#             */
/*   Updated: 2026/10/20 21:00:48 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_white_esp(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	signe;

	i = is_white_esp(nptr);
	result = 0;
	signe = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (signe * result);
}
