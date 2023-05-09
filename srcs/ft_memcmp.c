/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:25:37 by carolina          #+#    #+#             */
/*   Updated: 2023/03/21 14:06:13 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[5] = "";
	char	s2[5] = "test";
	char	s3[5] = "ABZ";
	char	s4[5] = "AB";

	printf("My function is %d\n", ft_memcmp("", s2, 4));
	printf("memcmp is %d\n", ft_memcmp("", s2,  4));
	printf("My function is %d\n", ft_memcmp(s1, s3, 3));
	printf("memcmp is %d\n", ft_memcmp(s1, s3, 3));
	printf("My function is %d\n", ft_memcmp(s1, s4, 3));
	printf("memcmp is %d\n", ft_memcmp(s1, s4, 3));
	return (0);
}*/
