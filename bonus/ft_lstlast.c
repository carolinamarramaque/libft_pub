/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:49:17 by cmarrama          #+#    #+#             */
/*   Updated: 2023/05/04 12:20:49 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
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
	int	test = 82;
	int	test2 = -42;

	head = ft_lstnew(&test);
	ptr = ft_lstnew(&test2);
	ft_lstadd_front(&head, ptr);
	tmp = ft_lstlast(head);
	printf("%d\n", *(int *)tmp->content);
}*/
