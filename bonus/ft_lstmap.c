/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:14:42 by cmarrama          #+#    #+#             */
/*   Updated: 2023/05/04 12:35:15 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (lst)
	{
		new = 0;
		while (lst)
		{
			tmp = ft_lstnew(f(lst->content));
			if (!tmp)
			{
				ft_lstclear(&new, del);
				return (0);
			}
			ft_lstadd_back(&new, tmp);
			lst = lst->next;
		}
		return (new);
	}
	return (0);
}
/*
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	if (lst)
	{
		while (ptr != NULL)
		{
			f(ptr->content);
			ptr = ptr->next;
		}
	}
}

void	add(void *data)
{
	*(int *)data += 1;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	current = *lst;
	if (lst && del)
	{
		while (current != NULL)
		{
			tmp = current->next;
			del(current->content);
			free(current);
			current = tmp;
		}
		*lst = NULL;
	}
}

void	del(void *data)
{
	free(data);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (new)
	{
		tmp->next = new;
		new->next = NULL;
	}
}

#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*ptr;
	t_list	*print;
	int	test = 42;
	int	test2 = -42;

	head = ft_lstnew(&test);
	ptr = ft_lstnew(&test2);
	ft_lstadd_front(&head, ptr);
	for (print = head; print != NULL; print = print->next)
		printf("%d\n", *(int *)print->content);
	ft_lstmap(head, &add, &del);
	for (print = head; print != NULL; print = print->next)
		printf("%d\n", *(int *)print->content);
}*/
