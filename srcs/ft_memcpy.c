/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:05:47 by carolina          #+#    #+#             */
/*   Updated: 2023/03/15 10:21:06 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (dest != NULL && src != NULL)
	{
		while (n > 0)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[15] = "Hello!";
	char	s2[15] = {0};

	printf("%s\n", s2);
	ft_memcpy(s2, s1, sizeof(s1));
	printf("%s\n", s2);
	return (0);
}*/
