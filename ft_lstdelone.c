/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 16:04:35 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/25 18:19:46 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
