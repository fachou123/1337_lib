/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fachouar <marvin@42.fr>                   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 17:32:29 by fachouar         #+#    #+#              */
/*   Updated: 2026/10/24 22:03:00 by fachouar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	del_content(t_list *new_lst, void (*del)(void *))
{
	t_list	*node;

	if (!new_lst)
		return ;
	while (new_lst != NULL)
	{
		del(new_lst->content);
		node = new_lst->next;
		free(new_lst);
		new_lst = node;
	}
}

static void	creat_node(t_list *new_lst, t_list *tmp, void *(*f)(void *))
{
	new_lst->content = f(tmp->content);
	new_lst->next = NULL;
}

static void	creat_head(t_list **head, t_list **last, t_list *new_lst)
{
	if (*head == NULL)
	{
		*head = new_lst;
		*last = new_lst;
	}
	else
	{
		(*last)->next = new_lst;
		*last = new_lst;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	t_list	*n_tmp;
	t_list	*last;

	if (!lst)
		return (NULL);
	tmp = lst;
	n_tmp = NULL;
	last = NULL;
	while (tmp != NULL)
	{
		new_lst = malloc(sizeof(t_list));
		if (!new_lst)
		{
			del_content(n_tmp, del);
			return (NULL);
		}
		creat_node(new_lst, tmp, f);
		creat_head(&n_tmp, &last, new_lst);
		tmp = tmp->next;
	}
	return (n_tmp);
}
