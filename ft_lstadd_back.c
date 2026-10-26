/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 15:11:08 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/25 23:14:26 by fachouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = new;
}
