/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:03:03 by cmarrama          #+#    #+#             */
/*   Updated: 2023/04/17 16:07:36 by cmarrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
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
	int	test = 42;
	int	test2 = -42;

	head = ft_lstnew(&test);
	ptr = ft_lstnew(&test2);
	printf("%d\n", *(int *)head->content);
	ft_lstadd_front(&head, ptr);
	printf("%d\n", *(int *)head->content);
}*/
