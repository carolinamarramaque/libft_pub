/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:10:07 by carolina          #+#    #+#             */
/*   Updated: 2023/03/15 11:22:49 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)malloc(n * sizeof(char));
	if (!temp)
		return (0);
	i = 0;
	while (i < n)
	{
		temp[i] = ((const char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = temp[i];
		i++;
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
	ft_memmove(s2, s1, sizeof(s1));
//	memmove(s2, s1, sizeof(s1));
	printf("%s\n", s2);
	return (0);
}*/
