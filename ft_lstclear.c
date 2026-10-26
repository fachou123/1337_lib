/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 16:11:14 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/25 16:13:18 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next;

	head = *lst;
	if (*lst == NULL)
	{
		return ;
	}
	while (head != NULL)
	{
		next = head->next;
		ft_lstdelone(head, del);
		head = next;
	}
	*lst = NULL;
}
