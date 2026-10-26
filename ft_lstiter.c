/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 16:17:01 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/25 16:19:24 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	if (!lst)
	{
		return ;
	}
	head = lst;
	while (head != NULL)
	{
		f(head->content);
		head = head->next;
	}
}
