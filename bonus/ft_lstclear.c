/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:38:19 by cmarrama          #+#    #+#             */
/*   Updated: 2023/04/17 15:20:51 by cmarrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
void	del(void *data)
{
	free(data);
}

void ft_lstadd_back(t_list **lst, t_list *new)
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

#include <stdio.h>

int	main()
{
	t_list	*head;
	t_list	*ptr;
	t_list	*tmp;
	t_list	*print;
	int	test = 42;
	int	test2 = -42;
	int	test3 = 100;

	head = ft_lstnew(&test);
	ptr = ft_lstnew(&test2);
	tmp = ft_lstnew(&test3);
	ft_lstadd_front(&head, ptr);
	ft_lstadd_back(&head, tmp);
	for (print = head; print != NULL; print = print->next)
		printf("%d\n", *(int *)print->content);
	ft_lstclear(&head, &del);
	printf("%d\n", *(int *)head->content);
}*/
