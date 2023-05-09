/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:34:37 by cmarrama          #+#    #+#             */
/*   Updated: 2023/05/04 12:25:15 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
	else
		*lst = new;
}
/*
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
}*/
