/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:57:52 by cmarrama          #+#    #+#             */
/*   Updated: 2023/04/17 15:22:07 by cmarrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
void	add(void *data)
{
	*(int *)data += 1;
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
	t_list	*print;
	int	test = 42;
	int	test2 = -42;

	head = ft_lstnew(&test);
	ptr = ft_lstnew(&test2);
	ft_lstadd_front(&head, ptr);
	for (print = head; print != NULL; print = print->next)
		printf("%d\n", *(int *)print->content);
	ft_lstiter(head, &add);
	for (print = head; print != NULL; print = print->next)
		printf("%d\n", *(int *)print->content);
}*/
