/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:32:49 by carolina          #+#    #+#             */
/*   Updated: 2023/03/21 13:52:19 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (i < n)
		{
			if (((unsigned char *)s)[i] == (unsigned char)c)
				return ((void *)s + i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s[15] = "Hello World!";
	char	*ptr;

	ptr = ft_memchr(s, 'o', sizeof(s));
	printf("My function is %s\n", ptr);
	ptr = memchr(s, 'o', sizeof(s));
	printf("memchar is %s\n", ptr);
}*/
